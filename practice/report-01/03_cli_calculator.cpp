#include <iostream>
using namespace std;

// 로또 복권 생성
// - 2차원 배열 동적 할당
// - 1~45 난수 생성
// - 중복 제거
// - 정렬 후 출력

#include <ctime>      // time()
#include <cstdlib>    // rand(), srand()
#include <algorithm>  // sort()

int main() {
	int num;
	cout << "로또 복권을 몇 장 구입 하실래요 : ";
	cin >> num;

	// 2차원 배열 동적 할당 (행: 복권 수, 열: 6개 번호)
	int** arr = new int* [num];
	for (int i = 0; i < num; i++) {
		arr[i] = new int[6];
	}

	int temp;
	bool isDuplicate;

	// 난수 시드 초기화 (실행할 때마다 다른 값 나오게)
	srand((unsigned)time(NULL));

	// 각 복권마다 번호 생성
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 6; j++) {
			isDuplicate = false;

			// 1~45 범위 난수 생성
			temp = rand() % 45 + 1;

			// 중복 체크 (현재까지 뽑은 값들과 비교)
			for (int k = 0; k < j; k++) {
				if (arr[i][k] == temp) {
					isDuplicate = true;
					break;
				}
			}

			// 중복이면 같은 자리 다시 뽑기
			if (isDuplicate) {
				j--;
			}
			else {
				arr[i][j] = temp;
			}
		}

		// 한 줄(복권 1장) 정렬
		sort(arr[i], arr[i] + 6);
	}

	cout << endl << "##### 로또 번호 출력 #####" << endl;

	// 결과 출력
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 6; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// 동적 메모리 해제 (2차원 배열)
	for (int i = 0; i < num; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}