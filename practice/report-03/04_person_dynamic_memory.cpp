#include <iostream>
#include <cstring> // strlen(), strcpy_s() 사용

using namespace std;

// 학생 정보를 저장하기 위한 Person 클래스 정의
class Person {
public:
	Person(const char*, const char*, const char*, const char*);
	~Person();
	void showPerson()const;

private:
	char* name_;   
	char* gender_; 
	char* tel_;    
	char* addr_;   
};

// 생성자 정의
// 전달받은 문자열의 길이만큼 동적 메모리를 할당한 뒤 복사
Person::Person(const char* name, const char* gender, const char* tel, const char* addr) {
	// 이름 저장 공간 동적 할당 및 문자열 복사
	name_ = new char[strlen(name) + 1];
	strcpy_s(name_, strlen(name) + 1, name);

	// 성별 저장 공간 동적 할당 및 문자열 복사
	gender_ = new char[strlen(gender) + 1];
	strcpy_s(gender_, strlen(gender) + 1, gender);

	// 연락처 저장 공간 동적 할당 및 문자열 복사
	tel_ = new char[strlen(tel) + 1];
	strcpy_s(tel_, strlen(tel) + 1, tel);

	// 주소 저장 공간 동적 할당 및 문자열 복사
	addr_ = new char[strlen(addr) + 1];
	strcpy_s(addr_, strlen(addr) + 1, addr);
}

// 소멸자 정의
// 생성자에서 new[]로 할당한 메모리를 delete[]로 해제
Person::~Person() {
	delete[] name_;
	delete[] gender_;
	delete[] tel_;
	delete[] addr_;
}

// 학생 정보 출력 함수
void Person::showPerson() const {
	cout << name_ << " " << gender_ << " " << tel_ << " " << addr_ << " " << endl;
}

int main() {
	Person* pArr[3];

	char name[12];
	char gender[8];
	char tel[16];
	char addr[48];

	// 3명의 학생 정보를 반복 입력
	for (int i = 0; i <= 2; i++) {
		cout << i + 1 << "번째 학생의 정보를 입력하세요." << endl;

		// cin.getline()을 사용하여 공백이 포함된 문자열 입력 가능
		cout << "이  름: ";
		cin.getline(name, 12);

		cout << "성  별: ";
		cin.getline(gender, 8);

		cout << "연락처: ";
		cin.getline(tel, 16);

		cout << "주  소: ";
		cin.getline(addr, 48);

		// 입력받은 정보를 이용하여 Person 객체를 동적 생성
		pArr[i] = new Person(name, gender, tel, addr);
	}

	cout << "\n ###학생정보출력###" << endl;

	// 저장된 학생 정보 출력
	for (int i = 0; i <= 2; i++) {
		pArr[i]->showPerson();
	}

	// 동적으로 생성한 Person 객체 해제
	// 객체가 해제되면서 소멸자가 자동 호출됨
	for (int i = 0; i <= 2; i++) {
		delete pArr[i];
	}

	return 0;
}