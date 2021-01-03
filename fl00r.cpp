#include "fl00r.h"
#include <iostream>
using namespace std;



fl00r::fl00r(bool a, bool b, bool c)
{
	passExistence = 0;
	button = 0;
	lamp = 0;

}

void fl00r::update()
{
	



	cout << "floor " << index<< "---------" << endl;
	cout << "passExistence " << passExistence << endl;
	cout << "button " << button << endl;
	cout << "lamp " << lamp << endl;

	//cout << "pass serial number is " << endl;

	
}

void fl00r::set(int x)
{
	index = x;
}

