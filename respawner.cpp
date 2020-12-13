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

														// dynamic memory syntax  Ptr1->func();   

	

	
}

int respawner::update()
{
	respawner::tick();
	passTime = time;
	cout << "time in respawner ="  << passTime << endl;
	

	const int size = 3;

	int arr[size];

	arr[0] = Ptr1->getBirthday();
	arr[1] = Ptr2->getBirthday();
	arr[2] = Ptr3->getBirthday();






	
	if (a == x)
	{
		passenger* Ptr1 = new passenger;
		Ptr1->setPass(1,2,passTime);																//spawn destination birthday
		Ptr1->yell();
	
	}
	else
	{
		int status = 0;

	}
	

	return 0;
}
