#include<iostream>

using namespace std;

struct Complex {
	double real;
	double imaginary;

	Complex() {
	}
	Complex(double real, double imaginary) {
		this->real = real;
		this->imaginary = imaginary;
	}

	Complex operator+(Complex m) {
		return Complex(this->real + m.real, this->imaginary + m.imaginary);
	}
	Complex operator-(Complex m) {
		return Complex(this->real - m.real, this->imaginary - m.imaginary);
	}
	Complex operator*(Complex m) {
		return Complex(this->real * m.real - this->imaginary*m.imaginary, this->imaginary*m.real - this->real*m.imaginary);
	}
};

ostream& operator<<(ostream& w, Complex&m) {
	w << m.real << " + " << m.imaginary << "i";
	return w;
}

istream& operator>>(istream& w, Complex&m) {
	w >> m.real >> m.imaginary;
	return w;
}

int main(int*tab, int n) {
	Complex a(1.0, 2.0);
	Complex b(3.0, 4.0);
	Complex c, d;
	c = a + b;
	cout << c << endl;
	c = a - b;
	cout << c << endl;
	c = a*b;
	cout << c << endl;
	cin >> d;
	cout << d;
}