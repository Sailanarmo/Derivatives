#include <iostream>
#include <string>
#include "productRule.hpp"

Product::Product(int b, int e) : base(b), expon(e){}

int Product::multByExpon(int x, int e){
	if (e == 1) return x * 1;
	if (e == 0) return x;
	return x * e;
}

int Product::exponent(int e){
	if (e == 1) return e;
	if (e == 0) e = 1;
	return e - 1;
}

int Product::getBase() const{
	return base;
}

int Product::getExpon() const{
	return expon;
}

void Product::inputBase(int xBase){
	base = xBase;
}

void Product::inputExpon(int xExpon){
	expon = xExpon;
}

std::istream& operator>> (std::istream& i, Product& a){
	int c = 0;
	std::string b = " ";
	i >> c;
	a.inputBase(c);
	std::cout << "Enter an Exponent: ";
	i >> c;
	a.inputExpon(c);
	return i;
}

std::ostream& operator<< (std::ostream& o, Product const& a){
	if (a.getExpon() == 0){
	       	o << a.getBase();
	}
	else if(a.getExpon() == 1){
		o << a.getBase() << "x";
	}
	else {
		o << a.getBase() << "x^" << a.getExpon();
	}
}
	
