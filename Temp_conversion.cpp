#include<stdio.h>
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int temp_fahrenh = 0;
	float temp_celsius = 0;
	cout << "\nTempareature conversion from Fahrenheit to celsius: \n";
	std::cout << std::left <<std::setw(10)<<"fahrenheit"<<right << setw(12)<<"celsius\n";
	do {
		temp_celsius = 5.0 / 9.0 * (temp_fahrenh-32);
		std::cout << std::left << std::setw(10) << temp_fahrenh << right << setw(12) <<temp_celsius ;
		temp_fahrenh += temp_fahrenh;

	} while (temp_fahrenh <= 212);
	

}