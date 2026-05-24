#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
    // 실행 인자가 부족한 경우
    if (argc < 3) {
        cout << "사용법: my_copy 원본파일명 대상파일명" << endl;
        exit(100);
    }

    char ch;

    // argv[1] : 원본 파일
    ifstream inStream(argv[1], ios::in | ios::binary);

    if (!inStream.is_open()) {
        cout << "원본 파일 개방 실패!!!" << endl;
        exit(1);
    }

    // argv[2] : 복사 파일
    ofstream outStream(argv[2], ios::out | ios::binary);

    if (!outStream.is_open()) {
        cout << "대상 파일 개방 실패!!!" << endl;
        inStream.close();
        exit(1);
    }

    // 파일 복사
    while (inStream.read(&ch, sizeof(char))) {

        outStream.write(&ch, sizeof(char));
    }
    
    cout << "파일 복사중..." << endl;
    cout << "파일 복사 완료!!!" << endl;

    inStream.close();
    outStream.close();

    return 0;
}