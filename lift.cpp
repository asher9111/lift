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

	int sN = 0;
	if (Ptr1->status == 1)
		sN = 1;
	if (Ptr2->status == 1)
		sN = 2;
	if (Ptr3->status == 1)
		sN = 3;
	



	if (f1->button == false && f2->button == false && passStatus == 0)    // idle
	{
		cout << "lift sleeping" << endl;
		state = 0;
	}





	
	state = 1;
	state = 2;
	state = -1;
	












	if (state == 1)													// on floor
	{
		cout << "lift arriving to floor 1" << endl;
		cout << "lamp is on" << endl;                                        //lamp is on
		cout << "door opens" << endl;


		if (sN == 1)
		{
			if (Ptr1->destination == 1)
			{
				kill = 1;
				delete Ptr1;
				cout << "passenger going out at floor 1" << endl;
			}
		}

		if (sN == 2)
		{
			if (Ptr2->destination == 1)
			{
				kill = 2;
				delete Ptr2;
				cout << "passenger going out at floor 1" << endl;
			}
		}

		if (sN == 3)
		{
			if (Ptr3->destination == 1)
			{
				kill = 3;
				delete Ptr3;
				cout << "passenger going out at floor 1" << endl;
			}
		}




		//take pass on floor1 if exist
		if (f1->passExistence == 1)
		{
			cout << "passenger walk into the lift on floor 1" << endl;
			cout << "door closing" << endl;
			cout << "lamp is off" << endl;
			f1->passExistence = 0;
			passStatus = 1;

			switch (f1->passSn)
			{
			case 1:
				Ptr1->status = 1;
				break;
			case 2:
				Ptr2->status = 1;
				break;
			case 3:
				Ptr3->status = 1;
				break;
			default:
				cout << "ERROR" << endl;

			}




			state = -1;  // move
		}



	}

	if (state == 2)													// on floor
	{
		cout << "lift arriving to floor 2" << endl;
		cout << "lamp is on" << endl;                               //lamp is on
		cout << "door opens" << endl;


		if (sN == 1)
		{
			if (Ptr1->destination == 2)
			{
				kill = 1;
				delete Ptr1;
				cout << "passenger going out at floor 2" << endl;
			}
		}

		if (sN == 2)
		{
			if (Ptr2->destination == 2)
			{
				kill = 2;
				delete Ptr2;
				cout << "passenger going out at floor 2" << endl;
			}
		}

		if (sN == 3)
		{
			if (Ptr3->destination == 2)
			{
				kill = 3;
				delete Ptr3;
				cout << "passenger going out at floor 2" << endl;
			}
		}




		//take pass on floor1 if exist
		if (f1->passExistence == 1)
		{
			cout << "passenger walk into the lift on floor 1" << endl;
			cout << "door closing" << endl;
			cout << "lamp is off" << endl;
			f1->passExistence = 0;
			passStatus = 1;

			switch (f1->passSn)
			{
			case 1:
				Ptr1->status = 1;
				break;
			case 2:
				Ptr2->status = 1;
				break;
			case 3:
				Ptr3->status = 1;
				break;
			default:
				cout << "ERROR" << endl;

			}




			state = -1;  // move
		}



	}

	

	if (state == -1 )                                              //moving
		{

			move++;

			if (move >= 5)
			{
				state = liftDest;
				move = 0;
			}


			cout << "lift is moving ------ " << move << "s" << endl;
			
		}



	}





