#include<iostream>

int main() {
	double sales=0;
	double salary;

	while (sales != 0) {
		std::cout << "Enter the sales in dollar (-1 to end): ";
		std::cin >> sales;

		if (sales != -1) {
			salary = 200 + (0.09 * sales);
			std::cout << "Salary is: $" << salary;
		}
		return 0;
	}
	

}