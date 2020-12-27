// Lift_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include "respawner.h"
#include "fl00r.h"
#include "lift.h"
#include "passenger.h"




int main()
{
	//timer t;
	respawner r;

	fl00r* f1 = new fl00r;
	fl00r* f2 = new fl00r;

	lift *L = new lift;

	passenger* P1 = new passenger;
	passenger* P2 = new passenger;
	passenger* P3 = new passenger;


	while (1)
	{
		
		r.update(P1, P2, P3, L);
		L->update();
		
		Sleep(1000);
	}


}




