
#include "report#02-6-point.cpp"

int main() {
	Point<int> temp;


	temp.showPoint();
	temp.setX(100);
	temp.setY(200);
	cout << "temp.x : " << temp.getX() << endl;
	cout << "temp.y : " << temp.getY() << endl;
	temp.showPoint();


	return 0;
}