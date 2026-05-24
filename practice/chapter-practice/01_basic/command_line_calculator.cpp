#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    try {
        if (argc != 4) {
            cout << "프로그램 사용법 : Clickseo 10 + 20" << endl;
            throw "입력 개수 오류";
        }

        char op;
        int a, b, res;
        a = atoi(argv[1]);
        b = atoi(argv[3]);
        op = argv[2][0];

        if (b == 0 && op == '/') {
            throw "나눗셈 입력 오류! 0으로 나눌 수 없습니다.";
        }

        switch (op) {
        case '+': res = a + b; break;
        case '-': res = a - b; break;
        case '*': res = a * b; break;
        case '/': res = a / b; break;
        default:
            throw "지원하지 않는 연산자입니다.";
        }

        cout << "계산 결과 " << a << " " << op << " " << b << " = " << res << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
        return 1;
    }

    return 0;
}