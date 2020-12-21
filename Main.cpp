// Lift_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include "timer.h"
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

	lift *L = new lift;

	passenger* P1 = nullptr;
	passenger* P2 = nullptr;
	passenger* P3 = nullptr;


	while (1)
	{
		
		r.update(P1, P2, P3, L);
		L->update();
		
		Sleep(1000);
	}


}




