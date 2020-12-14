#include "respawner.h"
#include "timer.h"
#include <iostream>
#include "passenger.h"

using namespace std;





respawner::respawner()
{
	passTime = 0;	
	passenger* Ptr1 = new passenger;
	passenger* Ptr2 = new passenger;
	passenger* Ptr3 = new passenger;
	
}

int respawner::update()
{

	


	respawner::tick();
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

	
	if (lastBirth > rand()%5+5)									 //  (need to check floor before spawn)
	{
		delete Ptr1;
		
		Ptr1 = new passenger ;
		Ptr1->setPass(a,b,passTime,1);								//spawnfloor destinationfloor birthday serialNumber
		Ptr1->yell();
		
		
	}
	else
	{
		int status = 0;

	}
	

	return 0;
}

void respawner::kill()
{
	delete Ptr1;
}
