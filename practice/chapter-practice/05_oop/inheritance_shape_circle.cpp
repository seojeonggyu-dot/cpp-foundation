#include <iostream>
using namespace std;

class Shape {
protected:
    double _x;
    double _y;

public:
    Shape(double x = 0.0, double y = 0.0);
    void move(double x, double y);
    virtual void draw() const;
};

Shape::Shape(double x, double y) {
    _x = x;
    _y = y;
}

void Shape::move(double x, double y) {
    _x = x;
    _y = y;
}

void Shape::draw() const {
    cout << "[Shape]     위치: (" << _x << ", " << _y << ")" << endl;
}

class Circle : public Shape {
protected:
    double _radius;

public:
    Circle(double x = 0.0, double y = 0.0, double radius = 100.0);
    void setRadius(double radius);
    void draw() const override;
};

Circle::Circle(double x, double y, double radius)
    : Shape(x, y) {// 부모 클래스가 먼저 생성되기 때문에 이렇게 설정해야됨
    _radius = radius;
}

void Circle::setRadius(double radius) {
    _radius = radius;
}

void Circle::draw() const {
    cout << "[Circle]    위치: (" << _x << ", " << _y << ") "<< "반지름 = " << _radius << endl;
}

class Rectangle : public Shape {
protected:
    double _width;
    double _height;

public:
    Rectangle(double x = 0.0, double y = 0.0,double width = 100.0, double height = 100.0);
    void reSize(double width, double height);
    void draw() const override;
};

Rectangle::Rectangle(double x, double y, double width, double height)
    : Shape(x, y) {
    _width = width;
    _height = height;
}

void Rectangle::reSize(double width, double height) {
    _width = width;
    _height = height;
}

void Rectangle::draw() const {
    cout << "[Rectangle] 위치: (" << _x << ", " << _y << ") "<< "너비 = " << _width << ", 높이 = " << _height << endl;
}

int main() {
    Shape s1;
    s1.draw();

    Shape s2(100, 100);
    s2.draw();

    Rectangle r1;
    r1.draw();

    Rectangle r2;
    r2.move(200, 100);
    r2.reSize(50, 50);
    r2.draw();

    Circle c1;
    c1.draw();

    Circle c2;
    c2.move(300, 100);
    c2.setRadius(30);
    c2.draw();

    return 0;
}