#include <iostream>
#include<iomanip>
#include<algorithm>
#include<cstdlib>
#include<ctime>
using namespace std;
#define COL 6

int main(void)
{
	int i, num;
	cout << "로또 복권을 몇 장 구입하실래요: ";
	cin >> num;
	// 동적메모리할당: 2차원배열
	int ** table = new int * [num + 1];
	for (i = 0; i < num; ++i)
		*(table + i) = new int[COL];
	*(table + i) = nullptr;
	// table[i] = nullptr
	
	// 학생 정보 입력: 이름
	for (i = 0; i < row; ++i) {
		cout << i + 1 << "번째 이름: ";
		cin >> *(table + i);
	}
	cout << endl << "### 학생 정보 출력 ### " << endl << endl;
	for (i = 0; i < row; ++i)
		cout << i + 1 << " : " << *(table + i) << endl;
	// 동적 메모리 할당해제: 2차원 배열
	// char ** p = table;
	// while (*p != nullptr)
	// delete[] *p++;
	for (i = 0; i < row; ++i)
		delete[] * (table + i);
	delete[] table;
	return 0;
}
