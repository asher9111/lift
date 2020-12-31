// Lift_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include "respawner.h"
#include "fl00r.h"
#include "lift.h"
#include "passenger.h"
using namespace std;




int main()
{
	//timer t;
	respawner r;

	fl00r* f1 = new fl00r;
	f1->set(1);
	fl00r* f2 = new fl00r;
	f2->set(2);

	lift *L = new lift;

	passenger* P1 = new passenger;
	passenger* P2 = new passenger;
	passenger* P3 = new passenger;


	while (1)
	{
		cout << "START ======================================================== START" << endl;
		r.update(P1, P2, P3, L, f1, f2);

		L->update(P1, P2, P3, f1, f2);

		f1->update();
		f2->update();

		P1->update(f1, f2);
		P2->update(f1, f2);
		P3->update(f1, f2);




		cout << "END ======================================================== END" << endl;
		Sleep(1000);
	}


}




