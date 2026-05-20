#include <iostream>
#include <cstdlib>  // atoi()

using namespace std;

int main(int argc, char* argv[]) {

    try {
        // 입력 개수 확인 (프로그램 이름 포함 4개여야 정상)
        if (argc != 4) {
            cout << "프로그램 사용법 : Clickseo 10 + 20" << endl;
            throw "입력 개수 오류";
        }

        char op;
        int a, b, res;

        // 문자열 → 정수 변환
        a = atoi(argv[1]);
        b = atoi(argv[3]);

        // 연산자 추출 (문자열의 첫 글자)
        op = argv[2][0];

        // 0으로 나누기 예외 처리
        if (b == 0 && op == '/') {
            throw "나눗셈 입력 오류! 0으로 나눌 수 없습니다.";
        }

        // 연산 수행
        switch (op) {
        case '+': res = a + b; break;
        case '-': res = a - b; break;
        case '*': res = a * b; break;
        case '/': res = a / b; break;
        default:
            throw "지원하지 않는 연산자입니다.";
        }

        // 결과 출력
        cout << "계산 결과 " << a << " " << op << " " << b << " = " << res << endl;
    }

    // 예외 처리
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
        return 1;
    }

    return 0;
}