#include <iostream>
#include <fstream>
using namespace std;
// 읽고 쓰는 걸 2개로 나누지 않고 한번에 한다.
int main(void)
{
    int i1 = 12345;
    double d1 = 10.78;

    // 파일 개방: data.bin
    // ofstream outStream("data.bin", ios::out | ios::binary);
    fstream ioStream("data.bin", ios::in | ios::out | ios::binary);

    if (!ioStream.is_open()) {
        cout << "data.bin 개방 실패!!!";
        exit(1);
    }

    // data.bin 파일에 데이터 쓰기
    ioStream.write(reinterpret_cast<char*>(&i1), sizeof(int));
    ioStream.write(reinterpret_cast<char*>(&d1), sizeof(double));

    // 파일 닫기: data.bin
    // outStream.close();

    // 파일 개방: data.bin
    // ifstream inStream("data.bin", ios::in | ios::binary);

    // if (!inStream.is_open()) {
    //     cout << "data.bin 개방 실패!!!";
    //     exit(1);
    // }

    int i2;
    double d2;
    // data.bin 파일에서 데이터 읽기
    ioStream.seekg(0);
    ioStream.read(reinterpret_cast<char*>(&i2), sizeof(int));
    ioStream.read(reinterpret_cast<char*>(&d2), sizeof(double));

    // 파일 닫기: data.bin
    ioStream.close();

    cout << "i2: " << i2 << endl;
    cout << "d2: " << d2 << endl;

    return 0;
}