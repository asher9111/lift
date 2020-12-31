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

void lift::update(passenger* Ptr1, passenger* Ptr2, passenger* Ptr3,fl00r* f1,fl00r* f2)
{
	lift::tick();
	//time


	cout << "lift update ---------" << endl;
	if (f1->button == false && f2->button == false && passStatus == 0)
	{
		cout << "lift sleeping" << endl;
	}
	else
	{
		if (lift on floor1)
		{
			take pass on floor1
		}

		if (lift on floor2)
		{
			take pass on floor2
		}

	}













	
	
	kill = 1;
	//delete Ptr1;
}

