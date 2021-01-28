#include "respawner.h"
#include "timer.h"
#include <iostream>
#include "passenger.h"
#include "lift.h"
#include "fl00r.h"

using namespace std;





respawner::respawner()
	
{
	passTime = 0;	
}

respawner::~respawner()
{
}

void respawner::update(passenger*& Ptr1, passenger*& Ptr2, passenger* &Ptr3, lift* Lift, fl00r* f1, fl00r* f2 )
{

	cout << "respawner code start----------" << endl;




	respawner::tick();																			//logical time inside respawner (int)
	passTime = time;
	//cout << "time in respawner ="  << passTime << endl;



	

	const int size = 3;																			//calculate newest passenger

	int arr[size];


	if (Ptr1 != 0)
	{
		arr[0] = Ptr1->getBirthday();
	}
	else
	{
		arr[0] = 0;
	}
	//
	if (Ptr2 != 0)
	{
		arr[1] = Ptr2->getBirthday();
	}
	else
	{
		arr[1] = 0;
	}
	//
	if (Ptr3 != 0)
	{
		arr[2] = Ptr3->getBirthday();
	}
	else
	{
		arr[2] = 0;
	}





	//cout << "before" << arr[0] << arr[1] << arr[2] << endl;

	int temp;
	for (int pas=1;pas<size;pas++)
	{
		for (int i = 0; i < size-1;i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;

			}
		}
	}

	//cout << "after sorting"<< arr[0] << arr[1] << arr[2] << endl;

	int lastBirth = passTime - arr[size-1];
	//cout << "lastBirth- " << lastBirth << endl;




	// floor randomizer
	int a, b;

	a = rand() % 2 + 1;

	if (a == 1)
		b = 2;
	else
		b = 1;




	bool blocker = false;
	if (f1->passExistence == 1 && a == 1)
		blocker = true;

	if (f2->passExistence == 1 && a == 2)
		blocker = true;


 
	cout << "bloker = " << blocker << endl;



	
	if (lastBirth > rand()%5+5)
	{

		if (blocker == false)
		{

			if (Lift->kill == 0 || init != 4)
			{
				cout << "lift kill == " << Lift->kill << " initialization block in progress" << endl;

				if (/*time < 30 && */init == 3)
				{
					cout << "init=" << init << endl;
					Ptr3 = new passenger;
					Ptr3->setPass(a, b, passTime, 3, 0);								//spawnfloor destinationfloor birthday serialNumber status
					Ptr3->yell();
					init++;
					blocker = true;

					if (a == 1)
					{
						f1->passExistence = 1;
						f1->passSn = 3;
					}
					if (a == 2)
					{
						f2->passExistence = 1;
						f2->passSn = 3;
					}
				}

				if (/*time < 20 &&*/ init == 2)
				{
					cout << "init=" << init << endl;
					Ptr2 = new passenger;
					Ptr2->setPass(a, b, passTime, 2, 0);								//spawnfloor destinationfloor birthday serialNumber status
					Ptr2->yell();
					init++;
					blocker = true;

					if (a == 1)
					{
						f1->passExistence = 1;
						f1->passSn = 2;
					}
					if (a == 2)
					{
						f2->passExistence = 1;
						f2->passSn = 2;
					}
				}

				if (/*time < 10 &&*/ init == 1)
				{
					cout << "init=" << init << endl;
					Ptr1 = new passenger;
					Ptr1->setPass(a, b, passTime, 1, 0);								//spawnfloor destinationfloor birthday serialNumber status
					Ptr1->yell();
					init++;
					blocker = true;

					if (a == 1)
					{
						f1->passExistence = 1;
						f1->passSn = 1;
					}
					if (a == 2)
					{
						f2->passExistence = 1;
						f2->passSn = 1;
					}
				}

			}






			if (Lift->kill == 1&& blocker == false)
			{

				Ptr1 = new passenger;
				Ptr1->setPass(a, b, passTime, 1, 0);								//spawnfloor destinationfloor birthday serialNumber status
				Ptr1->yell();

				if (a == 1)
				{
					f1->passExistence = 1;
					f1->passSn = 1;
				}
				if (a == 2)
				{
					f2->passExistence = 1;
					f2->passSn = 1;
				}


			}


			if (Lift->kill == 2 && blocker == false)
			{

				Ptr2 = new passenger;
				Ptr2->setPass(a, b, passTime, 2, 0);								//spawnfloor destinationfloor birthday serialNumber status
				Ptr2->yell();
				if (a == 1)
				{
					f1->passExistence = 1;
					f1->passSn = 2;
				}
				if (a == 2)
				{
					f2->passExistence = 1;
					f2->passSn = 2;
				}


			}


			if (Lift->kill == 3 && blocker == false)
			{

				Ptr3 = new passenger;
				Ptr3->setPass(a, b, passTime, 3, 0);								//spawnfloor destinationfloor birthday serialNumber status
				Ptr3->yell();
				if (a == 1)
				{
					f1->passExistence = 1;
					f1->passSn = 3;
				}
				if (a == 2)
				{
					f2->passExistence = 1;
					f2->passSn = 3;
				}

			}



		}
		else
		{
			cout << "passenger cannot spawn on floor -" << a << " because of passExistence" << endl;
		}
	
	}
	else
	{
	int status = 0;
	cout << "no spawn !!" << endl;

	}
		

		
		
	
	
	

	cout << "respawner code end-----------" << endl;
}


