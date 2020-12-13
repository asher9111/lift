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
	passenger* Ptr3 = new passenger;														// dynamic memory syntax  Ptr1->func();   

	delete Ptr1;
	delete Ptr2;
	delete Ptr3;

	//Ptr1 = 0;
	//Ptr1->getBirthday();																	// mistake!!!!!!!! - hanging pointer
}

int respawner::update()
{
	respawner::tick();
	passTime = time;
	cout << "time in respawner ="  << passTime << endl;
	
	int a, x=0;

	a = (passTime % 5)+5;
	cout << "a = " << a << endl;

	x = 7;																						// i need to make good random later
	cout << "x = " << x << endl;




	
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
