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
			cout << "lift arriving to floor sN" << endl;
			lamp is on
				door opens

			if (passenger(in lift) destination == floor sN)
			{
				kill passenger sN (in lift)
				cout <<	passenger going out at floor sN
			}

			take pass on floor1 if exist
				cout <<"passenger walk into the lift on floor sN" <<endl;
			door closing 
				lift gonna move
		}

		if (lift on floor2)
		{
			same
		}

		if (lift moving)
		{
			moving 5 sec
				cout << lift moving to passenger destination;
		}

	}













	
	
	kill = 1;
	//delete Ptr1;
}

