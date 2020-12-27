#include "respawner.h"
#include "timer.h"
#include <iostream>
#include "passenger.h"
#include "lift.h"

using namespace std;





respawner::respawner()
	
{
	passTime = 0;	
}

respawner::~respawner()
{
}

void respawner::update(passenger* Ptr1, passenger* Ptr2, passenger* Ptr3, lift* Lift )
{

	


	respawner::tick();																			//logical time inside respawner (int)
	passTime = time;
	cout << "time in respawner ="  << passTime << endl;
	

	const int size = 3;																			//calculate newest passenger

	int arr[size];

	arr[0] = Ptr1->getBirthday();
	arr[1] = Ptr2->getBirthday();
	arr[2] = Ptr3->getBirthday();


	cout << "before" << arr[0] << arr[1] << arr[2] << endl;

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

	cout << "after sorting"<< arr[0] << arr[1] << arr[2] << endl;

	int lastBirth = passTime - arr[size-1];
	cout << "lastBirth- " << lastBirth << endl;





	int a, b;

	a = rand() % 2 + 1;
	//cout << "a = " << a << endl;
	if (a == 1)
		b = 2;
	else
		b = 1;

	//cout << "b = " << b << endl;

	
	if (lastBirth > rand()%5+5)												//  (need to check floor before spawn)
	{
		
		
		
		
		if (Lift->kill == 1)
		{
			
			Ptr1 = new passenger;
			Ptr1->setPass(a, b, passTime, 1);								//spawnfloor destinationfloor birthday serialNumber
			Ptr1->yell();
		}
		
		
		if (Lift->kill == 2)
		{
			
			Ptr2 = new passenger;
			Ptr2->setPass(a, b, passTime, 2);								//spawnfloor destinationfloor birthday serialNumber
			Ptr2->yell();
		}

		
		if (Lift->kill == 3)
		{
			
			Ptr3 = new passenger;
			Ptr3->setPass(a, b, passTime, 3);								//spawnfloor destinationfloor birthday serialNumber
			Ptr3->yell();
		}
		
		
		
	}
	else
	{
		int status = 0;
		cout << "no spawn !!" << endl;

	}
	

	
}


