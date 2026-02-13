#include <iostream>

int main() 
{
	int favorite_number;

	std::cout << "Enter your favorite number between 1 and 100";
	// printf("Enter your favorite number between 1 and 100");
	std::cin >> favorite_number;
	// scanf("%d",&favorite_number);
	std::cout << "Amazing!! That's my favorite number too" << std::endl;
	// printf("Amazing!! That's my favorite number too\n");

	return 0; // optoinal

}