#include <iostream>
#include "productRule.hpp"

int main(){

	Product a;
	Product b;

	std::cout << "A Simulation for the Product Rule." <<std::endl;
	std::cout << "Please enter a Base for the first Value (Note, if you want a 9x simply put 1 in for the exponent, if you want just the number, enter a 0 in the exponent): ";
	std::cin >> a;
	std::cout << "Please enter a Second Base: ";
	std::cin >> b;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	return 0;
}
