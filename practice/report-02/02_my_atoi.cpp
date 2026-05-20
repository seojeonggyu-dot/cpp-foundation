#include <iostream>
#include <string>
using namespace std;

// 문자열을 숫자로 변환하는 함수
// 문자열은 0~9 사이의 문자로 구성
// 0~9 이외의 문자가 존재 -> 작업 중단
// 첫 번째 문자로 양수와 음수를 표현하는 +,-만을 예외로 허용
// 포인터 연산과 제어문 이용

int my_atoi(const char* pStr) { // 포인터 기반 처리
	if (*pStr == '\0') return 0; // 문자열이 비어있을 때 예외처리
	int sign = 1;
	if (*pStr == '-') { // 첫번째 문자로 '-'가 들어왔을 때
		sign = -1;
		pStr++;
	}
	else if (*pStr == '+') {// 첫번째 문자로 '+'가 들어왔을 때
		pStr++;
	}
	int num = 0;
	while(*pStr) {
		if (*pStr >= '0' && *pStr <= '9') { // 0~9 사이의 문자만 허용
			num = num * 10 + (*pStr - '0'); // 문자 - '0' -> ASCII Code를 통해 숫자로 변환
			pStr++;
		}
		else { // 0~9 이외의 문자
			break;
		}
	}
	return sign * num;
}

int my_stoi(const string &rStr) {
	const char* pStr = &rStr[0]; // 포인터 연산을 사용하기 위해 string -> char*로 변환
	return my_atoi(pStr);
}


int main() {
	string rStr;
	cout << "정수로 변환할 문자열 입력: "; cin >> rStr;
	cout << "입력 문자열: " << rStr << " 변환된 숫자(int): " << my_stoi(rStr);

	return 0;
}