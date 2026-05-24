#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
	Point(int x=0, int y=0) {
		x_ = x;
		y_ = y;
	}
	int getX(){ return x_; }
	int getY() { return y_; }
protected:
	int x_;
	int y_;
};

class Rectangle {
public:
	Rectangle(int left = 0, int top = 0, int right = 0, int bottom = 0);
	Rectangle(const Point &topLeft, const Point&bottomRight);
	void  showRectangle();
private:
	Point topLeft_;
	Point bottomRight_;
};

Rectangle::Rectangle(int left, int top, int right, int bottom) {
	Point p1(left, top);
	Point p2(right, bottom);
	topLeft_ = p1;
	bottomRight_ = p2;
}


Rectangle::Rectangle(const Point &topLeft, const Point&bottomRight) {
	topLeft_ = topLeft;
	bottomRight_ = bottomRight;
}
void Rectangle::showRectangle() {
	cout << "Top    (x,y) ÁÂÇ¥: " << topLeft_.getX()<<" , " << topLeft_.getY()<<endl;
	cout << "bottom (x,y) ÁÂÇ¥: " << bottomRight_.getX() << " , " << bottomRight_.getY()<<endl;

	cout << "³Êºñ: " << abs(topLeft_.getX() - bottomRight_.getX()) << endl;
	cout << "³ôÀÌ: " << abs(topLeft_.getY() - bottomRight_.getY()) << endl;
	cout << "¸éÀû: " << (topLeft_.getX() - bottomRight_.getX())*(topLeft_.getY() - bottomRight_.getY()) << endl;
}

int main() {
	Rectangle r1;
	Rectangle r2(50,60,70,80);
	Rectangle r3(Point(10,20),Point(30,40));

	r1.showRectangle();
	r2.showRectangle();
	r3.showRectangle();

	return 0;
}