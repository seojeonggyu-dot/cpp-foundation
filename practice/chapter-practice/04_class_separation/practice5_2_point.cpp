#include "point.h"

// »ý¼ºÀÚ
Point::Point(int x, int y) {
    x_ = x;
    y_ = y;
}

int Point::getX() const { return x_; }
int Point::getY() const {return y_;}
void Point::setX(int x) {x_ = x;}
void Point::setY(int y) {y_ = y;}
void Point::showPoint() const {
    cout << "xÁÂÇ¥: " << x_ << endl;
    cout << "yÁÂÇ¥: " << y_ << endl;
}