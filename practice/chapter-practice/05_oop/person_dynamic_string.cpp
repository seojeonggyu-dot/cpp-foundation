#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	Person(const char* name, const char* gender, const char* tel, const char* addr);
	~Person();
	void showPerson(void) const;
private:
	char* name_;
	char* gender_;
	char* tel_;
	char* addr_;
};

int main() {
	Person* pArr[3];

	char name[12];
	char gender[8];
	char tel[16];
	char addr[48];

	for (int i = 0; i < 3; ++i) {
		cout << i + 1 << "번째 학생의 정보를 입력하세요: " << endl;
		cout << "이름: ";	cin.getline(name, 12);
		cout << "성별: ";   cin.getline(gender, 8);
		cout << "연락처: "; cin.getline(tel, 16);
		cout << "주소: ";   cin.getline(addr, 48);
		pArr[i] = new Person(name, gender, tel, addr);
	}
	
	cout << "\n 학생 정보 출력" << endl;
	for (int i = 0;i < 3;++i) {
		pArr[i]->showPerson();
	}
		return 0;
}

Person::Person(const char* name, const char* gender, const char* tel, const char* addr) {
	name_ = new char[strlen(name) + 1];
	strcpy_s(name_, strlen(name) + 1, name);
	gender_ = new char[strlen(gender) + 1];
	strcpy_s(gender_, strlen(gender) + 1, gender);

	tel_ = new char[strlen(tel) + 1];
	strcpy_s(tel_, strlen(tel) + 1, tel);

	addr_ = new char[strlen(addr) + 1];
	strcpy_s(addr_, strlen(addr) + 1, addr);
}

Person::~Person() {
	delete[] name_;
	delete[] gender_;
	delete[] tel_;
	delete[] addr_;
}

void Person::showPerson(void) const {
	cout << name_ << " " << gender_ << " " << tel_ << " " << addr_ << " " << endl;
}