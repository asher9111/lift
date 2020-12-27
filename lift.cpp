#include "lift.h"
#include <iostream>
#include "passenger.h"



using namespace std;







lift::lift()
{
	button = 0;
	kill = 0;
}

lift::~lift()
{
}

void lift::update(passenger* Ptr1, passenger* Ptr2, passenger* Ptr3)

{
	cout << "lift update ---------" << endl;
	cout << "lift sleeping" << endl;
	kill = 1;
	//delete Ptr1;
}

