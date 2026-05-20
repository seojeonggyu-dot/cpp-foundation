#include <iostream>
using namespace std;

/*
이진수를 10진수로 변환
1. 이진수 여부 판단
2. 10진수 변환
*/

#include <cmath> // pow()

// 이진수인지 확인 (0,1로만 구성되어 있는지)
bool validateBinary(int num = 0) {
	while (num > 0) {
		int digit = num % 10; // 마지막 자리 추출

		// 0 또는 1이 아니면 false
		if (digit != 0 && digit != 1) {
			return false;
		}

		num /= 10; // 다음 자리 확인
	}
	return true;
}

// 이진수 → 십진수 변환
int binaryToDecimal(int num = 0) {
	int power = 0; // 자리수 (2의 지수)
	int sum = 0;   // 결과값

	while (num > 0) {
		int digit = num % 10;

		// 자리값 계산 (digit * 2^power)
		sum += digit * pow(2, power);

		power++;
		num /= 10;
	}
	return sum;
}

int main() {
	int num;

	cout << "이진수(1 또는 0) : ";
	cin >> num;

	// 이진수가 아닐 경우 재입력
	while (!validateBinary(num)) {
		cout << "이진수(1 또는 0)만 입력 가능합니다!!!" << endl;
		cout << "이진수(1 또는 0) : ";
		cin >> num;
	}

	cout << endl;
	cout << "입력한 이진수: " << num << endl;
	cout << "변환된 십진수 : " << binaryToDecimal(num);
}