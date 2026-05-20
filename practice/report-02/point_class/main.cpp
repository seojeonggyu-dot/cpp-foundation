#include "point.h"

int main() {
	Point temp;


	temp.showPoint();
	temp.setX(100);
	temp.setY(200);
	cout << "temp.x : " << temp.getX() << endl;
	cout << "temp.y : " << temp.getY() << endl;
	temp.showPoint();


	return 0;
}