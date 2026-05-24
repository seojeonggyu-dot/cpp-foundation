#include <iostream>
#include <string>
using namespace std;
// 필기시험 낼 때 무조건 나옴!

class Person {
protected:
    string name_;
    int age_;

public:
    Person(string name = "", int age = 0);
    string getName() const;
    int getAge() const;
    void setName(string name);
    void setAge(int age);
    virtual void print() const;
};

Person::Person(string name, int age) {
    name_ = name;
    age_ = age;
}

string Person::getName() const {
    return name_;
}

int Person::getAge() const {
    return age_;
}

void Person::setAge(int age) {
    age_ = age;
}

void Person::setName(string name)  {
    name_ = name;
}

void Person::print() const {
    cout << "이름: " << name_ << ", 나이: " << age_ << endl;
}

class Student : virtual public Person {
protected:
    int admissionYear_;
    int graduationYear_;

public:
    Student(string name = "", int age = 0, int admissionYear = 0, int graduationYear = 0);
    int getAdmissionYear() const;
    int getGraduationYear() const;
    void setAdmissionYear(int admissonYear) ;
    void setGraduationYear(int graduationYear) ;
    void print() const override;
};

Student::Student(string name, int age, int admissionYear, int graduationYear)
    : Person(name, age) {
    admissionYear_ = admissionYear;
    graduationYear_ = graduationYear;
}

int Student::getAdmissionYear() const {
    return admissionYear_;
}

int Student::getGraduationYear() const {
    return graduationYear_;
}

void Student::setGraduationYear(int graduationYear)  {
    graduationYear_ = graduationYear;
}
void Student::setAdmissionYear(int admissionYear) {
    admissionYear_ = admissionYear;
}
void Student::print() const {
    cout << "이름: " << name_ << ", 나이: " << age_ << endl;
    cout << "입학년도: " << admissionYear_ << endl;
    cout << "졸업년도: " << graduationYear_ << endl;
}

class Worker : virtual public Person {
protected:
    int workingTime_;

public:
    Worker(string name = "", int age = 0, int workingTime = 0);
    int getWorkingTime() const;
    void setWorkingTime(int workingTime);
    void print() const override;
};

Worker::Worker(string name, int age, int workingTime)
    : Person(name, age) {
    workingTime_ = workingTime;
}

int Worker::getWorkingTime() const {
    return workingTime_;
}

void Worker::setWorkingTime(int workingTime){
    workingTime_= workingTime;
}

void Worker::print() const {
    cout << "이름: " << name_ << ", 나이: " << age_ << endl;
    cout << "작업 시간: " << workingTime_ << endl;
}

class Albamon : public Student, public Worker {
public:
    Albamon(string name = "", int age = 0,int admissionYear = 0, int graduationYear = 0,int workingTime = 0);
    void print()  const override;
};

Albamon::Albamon(string name, int age,int admissionYear, int graduationYear,int workingTime)
    : Person(name, age),Student(name, age, admissionYear, graduationYear),Worker(name, age, workingTime) {}

void Albamon::print() const {
    cout << "이름: " << name_ << ", 나이: " << age_ << endl;
    cout << "입학년도: " << getAdmissionYear() << endl;
    cout << "졸업년도: " << getGraduationYear() << endl;
    cout << "근무시간: " << getWorkingTime() << endl;
}

int main() {
    Person aPerson("단군", 100);
    Student bStudent("이도", 25, 2020, 2024);
    Worker cWorker("이순신", 50, 100);
    Albamon dAlbamon("철수", 20, 2023, 2027, 120);

    aPerson.print();
    bStudent.print();
    cWorker.print();
    dAlbamon.print();

    return 0;
}