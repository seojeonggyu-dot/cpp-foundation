#include <iostream>
#include <cstdio>

namespace mystd {
	const char* endl = "\n";
	class ostream {
	public:
		ostream& operator <<(const char* pStr) {
			printf("%s ", pStr);
			return *this;
		}
		ostream& operator <<(int num) {
			printf("%d ", num);
			return *this;
		}
		ostream& operator <<(double d) {
			printf("%lf ", d);
			return *this;
		}
	};
	class istream {
	public:
		istream& operator >>(char* ch) {
			scanf("%s ", &ch);
			return *this;
		}
		istream& operator >>(int num) {
			scanf("%d ", &num);
			return *this;
		}
		istream& operator >>(double d) {
			scanf("%lf ", &d);
			return *this;
		}
	};
	ostream cout;
	istream cin;
}

int main() {
	mystd::cout << "Hi~ Clickseo" << mystd::endl;
	mystd::cout << 100 << mystd::endl;
	mystd::cout << 3.14159 << mystd::endl;
	mystd::cout << "Hi~ Clickseo" << 100<<3.14159<<mystd::endl;
	return 0;
}