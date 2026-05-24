#include "score.h"

#include <iostream>
using namespace std;
void Score::input() {
    cout << "이름: ";
    cin.getline(name, 12);

    cout << "국어: "; cin >> kor;
    cout << "영어: "; cin >> eng;
    cout << "수학: "; cin >> math;

    tot = kor + eng + math;
    ave = (float)tot / 3;
}

void Score::output() {
    cout << "\n##### 성적 결과 출력 #####" << endl;
    cout << name << " "
         << kor << " "
         << eng << " "
         << math << " "
         << tot << " "
         << ave << endl;
}