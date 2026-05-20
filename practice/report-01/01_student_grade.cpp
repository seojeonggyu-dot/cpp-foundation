#include <iostream>
using namespace std;

/*
다양한 자료형 배열 출력
- 템플릿 함수 사용
*/

#include <cstring> // strlen()

// 템플릿 함수 (자료형 상관없이 배열 출력)
template <typename T>
void printArr(T* pArr, const int num) {

    // 배열 요소 순차 출력
    for (int i = 0; i < num; i++) {
        cout << *(pArr + i) << " ";
    }
    cout << endl;
}

int main() {
    char aArr[] = "Hi~ Clickseo";
    int bArr[] = { 10, 20, 30, 40, 50 };
    double cArr[] = { 10.5, 20.5, 30.5, 40.5, 50.5 };

    // 문자열 길이만큼 출력 (널 문자 제외)
    printArr(aArr, (int)strlen(aArr));

    // 배열 크기 계산 후 출력
    printArr(bArr, sizeof(bArr) / sizeof(*bArr));
    printArr(cArr, sizeof(cArr) / sizeof(*cArr));
}