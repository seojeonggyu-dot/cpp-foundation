#include <iostream>

using namespace std;

class Person {
public:
	Person(const string name = "", const string gender = "", const string tel = "", const string addr = "");
	~Person();
	string getName(string name) {return name_ ;}
	string getGender(string gender) { return gender_; }
	string getTel(string tel) { return tel_; }
	string getAddr(string addr) { return addr_; }

	void setName(string name) { name_ = name; }
	void setGender(string gender) { gender_ = gender; }
	void setTel(string tel) { tel_ = tel; }
	void setAddr(string addr) { addr_ = addr; }

protected:
	string name_;
	string gender_;
	string tel_;
	string addr_;
};
Person::Person(const string name, const string gender, const string tel, const string addr)
	{
	name_ = name;
	gender_ = gender;
	tel_ = tel;
	addr_ = addr;
}

class Student :public Person {
public:
	Student(const string name = "", const string gender = "", const string tel = "", const string addr = "",
		const int kor = 0, const int eng = 0, const int math=0);
	~Student();

protected:
	int kor_;
	int eng_;
	int math_;
	int tot_;
	double avg_;
};
// 여기가 제일 중요함!!!!!!!!! 이것만 기억하면 됨 나머지는 단순 타이핑
Student::Student(const string name, const string gender, const string tel, const string addr,
	const int kor, const int eng, const int math) :Person(name, gender, tel, addr) {
	kor_ = kor;
	eng_ = eng;
	math_ = math;
	tot_ = kor + eng + math;

}

int main() {
	cout << "학생의 정보와 성적을 입력하세요";
	string name, gender, tel, addr;
	int kor, eng, math;
	cout << "이름: "; cin >> name;

	return 0;
}