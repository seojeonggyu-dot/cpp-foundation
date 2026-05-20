#include <iostream>
using namespace std;

/*
사칙연산 계산 프로그램
- 실수 입력
- +, -, *, / 연산 지원
- 예외 발생 시 처리
*/

#include <iomanip> // setprecision()

// 사칙연산 수행 함수
double CAL(double a, char op, double b) {

    // 0으로 나누기 예외 처리
    if (op == '/' && b == 0)
        throw "0으로 나눌 수 없습니다.";

    // 연산자에 따른 계산
    switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    default:
        throw "지원하지 않는 연산자입니다.";
    }
}

int main() {
    double num1, num2;
    char op;

    // 수식 입력 (숫자 연산자 숫자)
    cout << "수식 입력: ";
    cin >> num1 >> op >> num2;

    try {
        double result = CAL(num1, op, num2);

        // 소수점 둘째 자리까지 출력
        cout << fixed << setprecision(2);

        // 결과 출력
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    }

    // 예외 처리
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}