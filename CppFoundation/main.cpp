#include <iostream>

void func() {
	std::cout << 10;
}
int main() 
{
	/*
	int favorite_number;

	std::cout << "Enter your favorite number between 1 and 100";
	// printf("Enter your favorite number between 1 and 100");
	std::cin >> favorite_number;
	// scanf("%d",&favorite_number);
	std::cout << "Amazing!! That's my favorite number too" << std::endl;
	// printf("Amazing!! That's my favorite number too\n");

	int age = 24;
	std::cout << "my age is " << age << " Hello. ";
	return 0; // optional
	*/

	/*
	char a = 10;
	short b = 10;
	int c = 10;
	*/

	/*int scores[6] = {100, 85, 72, 42, 19, 74};*/

	int a = 10;

	func();

	int c = 30;
	int b = a + c;

	int values[] = { 2,-4,6,-3 };
	for (int i = 0;i < 9;i++) {
		if (values[i] == -3) {
			break;
		}
		else if (values[i] == -4) {
			continue;
		}
		else {
			std::cout << values[i] << std::endl;
			values[i] = 1;
		}
	}
}