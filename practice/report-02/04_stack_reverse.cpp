#include <iostream>
#include <string>
#include <stack>
using namespace std;

// 문자열을 입력받아 역순으로 출력
// string class 활용
// 스택 구조를 이용


int main() {
	stack<char> s;
	string str;
	cout << "문자열 입력: "; getline(cin,str); // 공백도 들어갈 수 있기 때문에 getline으로 문자열 입력받음
	for (int i = 0;i < str.size();i++) {
		s.push(str[i]);  // stack에 하나씩 값 저장
	}
	cout << "문자열 역순 출력: ";
	while (!s.empty()) { // stack에 있는 값 하나씩 출력
		cout << s.top(); 
		s.pop();
	}
	return 0;

}