#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main() {
	string str;
	cout << "문자열 입력 : ";
	getline(cin, str);	
	stack<char> s;

	for(char ch : str) {
		s.push(ch);
	}

	cout << "역순 문자열 : ";
	while(!s.empty()) {
		cout << s.top();
		s.pop();
	}
	cout << endl;
	return 0;
}