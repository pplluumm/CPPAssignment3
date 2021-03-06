//============================================================================
// Name        : Assignment3.cpp
// Author      : Jordan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LinkedStack.h"
#include "BarberShop.h"
#include "Customer.h"
using namespace std;

int main()
{
	BarberShop shop;
	Customer customer1("MARK", "KILGORE");
	Customer customer2("RICK", "GRIMM");
	shop.addCustomer(customer1);
	shop.addCustomer(customer2);
	Customer nextCustomer = shop.nextCustomer();
	cout << nextCustomer.getName() << " is served next" << endl;
	Customer customer3("JILL", "WOLFF");
	shop.addCustomer(customer3);
	nextCustomer = shop.nextCustomer();
	cout << nextCustomer.getName() << " is served next" << endl;
	nextCustomer = shop.nextCustomer();
	cout << nextCustomer.getName() << " is served next" << endl;
}
