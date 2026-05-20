#include <iostream>
using namespace std;


template <typename T>

class Point {
public:
    Point(T x = 0, T y = 0) {
        x_ = x;
        y_ = y;
    }

    T getX() const { return x_; }
    T getY() const { return y_; }

    void setX(T x) { x_ = x; }
    void setY(T y) { y_ = y; }

    void showPoint() const {
        cout << "xÁÂÇ¥: " << x_ << endl;
        cout << "yÁÂÇ¥: " << y_ << endl;
    }

private:
    T x_;
    T y_;
};


