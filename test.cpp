#include<iostream>
#include"Rational.cpp"
using namespace std;
int main() {
	Rational a(14, 4), b(3, 18), value;
	a.display();
	cout << " + ";
	b.display();
	cout << " = ";
	value = a = b;
	value.display();
	cout << "\n";

	a.display();
	cout << " - ";
	b.display();
	cout << " = ";
	value = a - b;
	value.display();
	cout << "\n";

	a.display();
	cout << " * ";
	b.display();
	cout << " = ";
	value = a * b;
	value.display();
	cout << "\n";

	a.display();
	cout << " / ";
	b.display();
	cout << " = ";
	value = a / b;
	value.display();
	cout << "\n";
}