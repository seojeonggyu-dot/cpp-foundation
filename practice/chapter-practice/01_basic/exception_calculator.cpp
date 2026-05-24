#include <iostream>
#include <iomanip>

// 사용자로부터 수식(연산자, 피연산자)을 입력받아서, 주어진 연산자로 사칙연산 계산 결과를 계산하느 프로그램을 작성하시오.
/*
입력된 수식 계산 시 사칙연산만을 지원하다.
입력되는 값은 실수이며, 연산결과는 소수점 둘쨰자리까지 출력
단 예외 발생시 c++의 예외 처리(try-catch)를 이용하여 작성하시오
*/

using namespace std;

int main() {
	double num1, num2;
	char op;
	std::cout << "수식 입력: ";
	std::cin >> num1 >> op >> num2;
	try {
		double result;
		switch (op) {
			case '+':
				result = num1 + num2;
				break;
			case '-':
				result = num1 - num2;
				break;
			case '*':
				result = num1 * num2;
				break;
			case '/':
				if (num2 == 0) {
					throw 1;
				}
				result = num1 / num2;
				break;
			default:
				throw 'e';
		}
		std::cout << "Result: " << std::fixed << std::setprecision(2) << result << std::endl;
	} catch (int exception) {
		std::cout << ("Division by zero is not allowed.");
	}
	catch (char exception) {
		std::cout << ("지원하지 않는 연산자");
	}
	return 0;
}
