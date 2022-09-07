#include <iostream>

#include <cstdlib>

int main() {
	int number;
	int guessingNumber=0;
	char a;

	do {
		number = rand() % 1000 + 1;
		std::cout << "I have a number between 1 and 1000.";
		std::cout << "\nCan you guess my number? ";
		std::cout << "\nPlease type your first number: ";

		while (guessingNumber != number) {
			std::cin >> guessingNumber;

			if (number < guessingNumber) {
				std::cout << "\nNumber is too high.Try again.  ";

			}
			if (number > guessingNumber) {
				std::cout << "\nNumber is too low.Try again. ";

			}
		}
		std::cout << "\nExcellent! you guess the number correctly. ";
		std::cout << "\nWould you like to play a game again? (Y or N)";
		std::cin >> a;
	} while ((a == 'y')||(a=='Y'));

	return 0;


}