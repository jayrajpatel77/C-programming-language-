#ifndef RATIONAL
#define RATIONAL

class Rational {
	public:
		Rational(int = 0, int = 1);
		Rational operator+(const Rational& r);
		Rational operator-(const Rational& r);
		Rational operator*(const Rational& r);
		Rational operator/(const Rational& r);
		Rational operator+(const Rational);
		Rational operator-(const Rational);
		Rational operator*(const Rational);
		Rational operator/(const Rational);
		bool operator>(const Rational)const;
		bool operator < (const Rational)const;
		bool operator>=(const Rational)const;
		bool operator<=(const Rational)const;
		bool operator==(const Rational)const;
		bool operator!=(const Rational)const;
		void display(void) const;

	private:
		int  numerator;
		int denominator;
		void reduction(void)
};





#endif