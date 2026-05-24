#include <iostream>
using namespace std;

class BaseClass {
public:
	virtual void show() {
		cout << "BaseClass!!!" << endl;
	}
};

class DerivedClass :public BaseClass{
public:
	void show() override {
		cout << "DerivedClass!!!" << endl;
	}
};

class SuperClass {
public:
	void show() {
		cout << "Super Class!!!" << endl;
	}
};
class BaseClass01:public SuperClass{};
class BaseClass02 :public SuperClass {};


class DerivedClass :public BaseClass01, public BaseClass02 {
public:
	void show() {
		SuperClass::show();
		BaseClass02::show();
		BaseClass02::show();
	}
};

int main() {
	/*BaseClass* pBC = new BaseClass;
	DerivedClass* pDC = new DerivedClass;
	
	pBC->show();
	pDC->show();

	pBC=pDC;
	pBC->show();
	return 0;*/
	DerivedClass d;
	d.show();
}