// Lift_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
//#include "timer.h"
#include "respawner.h"
#include "fl00r.h"
#include "lift.h"
#include "passenger.h"

int main()
{
	//timer t;
	respawner r;

	fl00r f1;
	fl00r f2;

	lift L;

	passenger* Ptr1 = nullptr;
	passenger* Ptr2 = nullptr;
	passenger* Ptr3 = nullptr;




	while (1)
	{
		
		r.update();
		L.update();
		
		

		
		Sleep(1000);
	}


}




