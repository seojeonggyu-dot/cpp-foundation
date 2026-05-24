#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ifstream inFile;

    inFile.open("data.txt");

    if (!inFile) {
        cout << "data.txt 개방 실패!!!" << endl;
        return 1;
    }

    string line;
    int num = 1;

    while (getline(inFile, line)) {
        cout << setw(3) << setfill('0') << num << ": ";
        cout << line << endl;
        num++;
    }

    inFile.close();

    return 0;
}