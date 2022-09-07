#include<iostream>
#include "Rational.cpp"
#include <cstdlib>
using namespace std;

Rational::Rational(int n, int d) {
	numerator = n;
	denominator = d;
	reduction();
}

Rational Rational::operator+(const Rational& r) {
	Rational sum;
	sum.numerator = numerator * r.denominator + denominator * r.numerator;
	sum.denominator = denominator * r.denominator;
	sum.reduction();


}
Rational Rational::operator-(const Rational& r) {
	Rational sub;
	sub.numerator = numerator * r.denominator - denominator * r.numerator;
	sub.denominator = denominator * r.denominator;
	sub.reduction();


}
Rational Rational::operator*(const Rational& r) {
	Rational mul;
	mul.numerator = numerator * r.numerator;
	mul.denominator = denominator * r.denominator;
	mul.reduction();


}
Rational Rational::operator/(const Rational& r) {
	Rational div;

		div.numerator = numerator * r.numerator;
		div.denominator = denominator * r.denominator;
		div.reduction();
	


}