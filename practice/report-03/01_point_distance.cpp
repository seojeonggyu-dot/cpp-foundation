#include <iostream>
#include <cmath> // sqrt() 함수 사용
using namespace std;

class Point {
public:
	// 생성자 선언
	// 매개변수에 기본값을 지정하여 인자가 없으면 (0, 0)으로 초기화
	Point(int = 0, int = 0);

	// 정수 좌표 x, y를 직접 입력받아 현재 객체와의 거리 계산
	double getDistance(int, int);

	// 다른 Point 객체를 입력받아 현재 객체와의 거리 계산
	double getDistance(const Point&);

	// 현재 객체의 좌표 출력
	void showPoint() const;

private:
	int x_;
	int y_;
};

// 생성자 정의
// 전달받은 x, y 값을 멤버 변수 x_, y_에 저장
Point::Point(int x, int y) {
	x_ = x;
	y_ = y;
}

// 현재 객체의 좌표 (x_, y_)와 입력받은 좌표 (x, y) 사이의 거리 계산
double Point::getDistance(int x, int y) {
	return sqrt((x_ - x) * (x_ - x) + (y_ - y) * (y_ - y));
}

// 현재 객체의 좌표 (x_, y_)와 다른 Point 객체 p의 좌표 사이의 거리 계산
double Point::getDistance(const Point& p) {
	return sqrt((p.x_ - x_) * (p.x_ - x_) + (p.y_ - y_) * (p.y_ - y_));
}

// 현재 객체의 좌표 출력
void Point::showPoint()const {
	cout << "좌표 : " << "( " << x_ << ", " << y_ << " )" << endl;
}

int main() {
	cout << "두 정수 입력 : ";

	int x, y;
	cin >> x >> y;

	// 원점을 나타내는 Point 객체 생성
	Point p1(0, 0);

	// 사용자가 입력한 좌표를 가지는 Point 객체 생성
	Point p2(x, y);

	// 각 객체의 좌표 출력
	p1.showPoint();
	p2.showPoint();

	// 첫 번째 방식: 정수 좌표 x, y를 직접 전달하여 거리 계산
	cout << "두 좌표간 거리: " << p1.getDistance(x, y) << endl;

	// 두 번째 방식: Point 객체 p2를 전달하여 거리 계산
	cout << "두 좌표간 거리: " << p1.getDistance(p2);

	return 0;
}