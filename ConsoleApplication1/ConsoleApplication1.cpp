// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Comp
{
private:
	float re, im;
public:
	/*Comp();
	Comp(float x, float y);*/
	void set();
	void view();
	Comp dodawanie(Comp z1, Comp z2);

	void dodawanie(Comp z);
	Comp operator+ (Comp C2);
	Comp operator- (Comp C2);
	Comp operator* (Comp C2);

};

Comp Comp::operator+(Comp C2) {
	Comp w;
	w.re = re + C2.re;
	w.im = im + C2.im;
	return w;

}

Comp Comp::operator-(Comp C2)
{
	Comp w;
	w.re = re - C2.re;
	w.im = im - C2.im;
	return w;
}

Comp Comp::operator*(Comp C2)
{
	Comp w;
	w.re = (re * C2.re) - (im * C2.im);
	w.im = (im * C2.re) - (im * C2.re);
	return w;
}

void Comp::set()
{
	cout << "Wpisz pierwsza wartosc: ";
	cin >> re;
	cout << endl;
	cout << "Wpisz druga wartosc: ";
	cin >> im;
	cout << endl;
}
void Comp::view()
{
	cout << "Wartosc re: " << re << endl;
	cout << "Wartosc im: " << im << endl;
}
Comp Comp::dodawanie(Comp z1, Comp z2)
{
	Comp x;
	x.re = z1.re + z2.re;
	x.im = z1.im + z2.im;
	return x;
}
void Comp::dodawanie(Comp z)
{
	re = re + z.re;
	im = im + z.im;
};
int main()
{
	Comp a, b, w;
	a.set();
	b.set();
	a.view();
	b.view();
	w = a * b;
	w.view();
	cout << "wynik z drugiej funkcji" << endl;
	system("PAUSE");
	return 0;
}
