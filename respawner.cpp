#include "respawner.h"
#include "timer.h"
#include <iostream>
#include "passenger.h"

using namespace std;

passenger* Ptr1 = new passenger;
passenger* Ptr2 = new passenger;
passenger* Ptr3 = new passenger;



respawner::respawner()
{
	passTime = 0;	
	
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

	int lastBirth = passTime - arr[0];


	
	if (lastBirth > rand()%5+5)																				// i need better random later
	{
		delete Ptr1;
		//Ptr1 = nullptr;
		passenger* Ptr1 = new passenger;
		Ptr1->setPass(1,2,passTime,1);																//spawn destination birthday
		Ptr1->yell();
		
	
	}
	else
	{
		int status = 0;

	}
	

	return 0;
}
