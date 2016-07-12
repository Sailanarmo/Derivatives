#ifndef PRODUCT_RULE_HPP
#define PRODUCT_RULE_HPP

#include <iostream>

class Product{

public:
	Product(int base = 1, int expon= 1);

	int multByExpon(int, int);
	int exponent(int);
	int getBase() const;
	int getExpon() const;

	void inputBase(int base);
	void inputExpon(int expon);

private:
	int base;
	int expon;
};

std::istream& operator>> (std::istream& i, Product & f);
std::ostream& operator<< (std::ostream& o, Product const &);

#endif
