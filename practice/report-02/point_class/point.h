#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point {
public:
    Point(int x = 0, int y = 0);

    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);

    void showPoint() const;

private:
    int x_;
    int y_;
};

#endif