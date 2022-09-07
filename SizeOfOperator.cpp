#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main() {
	FILE* file;
	file = fopen("datasize.dat","w");
	
	cout << left << setw(10) << "\nchar" << right << setw(12) << sizeof(char);
	cout << left << setw(10) << "\nunsigned char" << right << setw(12) << sizeof(unsigned char);
	cout << left << setw(10) << "\nshort int" << right << setw(12) << sizeof(short int);
	cout << left << setw(10) << "\nunsigned short int" << right << setw(12) << sizeof(unsigned short int);
	cout << left << setw(10) << "\nint" << right << setw(12) << sizeof(int);
	cout << left << setw(10) << "\nunsigned int" << right << setw(12) << sizeof(unsigned int);
	cout << left << setw(10) << "\nlong int" << right << setw(12) << sizeof(long int);
	cout << left << setw(10) << "\nunsigned long int" << right << setw(12) << sizeof(unsigned long int);
	cout << left << setw(10) << "\nfloat" << right << setw(12) << sizeof(float);
	cout << left << setw(10) << "\ndouble" << right << setw(12) << sizeof(double);
	cout << left << setw(10) << "\nlong double" << right << setw(12) << sizeof(long double);

	return 0;
}
