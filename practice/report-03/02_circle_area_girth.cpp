#include <iostream>
using namespace std;

// 원주율 값을 전역 변수로 선언
double PI = 3.141592;

class Circle {
public:
	// 생성자 선언
	// 매개변수에 기본값을 지정하여 인자가 없으면 반지름을 0으로 초기화
	Circle(double = 0);

	// 현재 객체의 반지름 값을 반환하는 함수
	double getRadius(void) const;

	// 원의 넓이를 계산하고 출력하는 함수
	void getArea();

	// 원의 둘레를 계산하고 출력하는 함수
	void getGirth();

	// 반지름 값을 설정하는 함수
	void setRadius(double);

private:
	double radius_; // 원의 반지름을 저장하는 멤버 변수
};

Circle::Circle(double radius) {
	radius_ = radius;
}

double Circle::getRadius(void) const {
	return radius_;
}

// 원의 넓이 = PI * r * r
void Circle::getArea() {
	cout << "원의 면적: " << PI * radius_ * radius_ << endl;
}

// 원의 둘레 = 2 * PI * r
void Circle::getGirth() {
	cout << "원의 둘레: " << PI * radius_ * 2 << endl;
}

void Circle::setRadius(double radius) {
	radius_ = radius;
}

int main() {
	cout << "원의 반지름 입력: ";

	double r;

	cin >> r;

	// Circle 객체 생성
	// 기본 생성자에 의해 처음 반지름은 0으로 초기화됨
	Circle c;

	// 입력받은 반지름 값을 객체에 저장
	c.setRadius(r);

	// 원의 넓이 출력
	c.getArea();

	// 원의 둘레 출력
	c.getGirth();

	return 0;
}