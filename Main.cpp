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
	P1->setPass(0, 0, 0, 1, 0);
	passenger* P2 = new passenger;
	P2->setPass(0, 0, 0, 2, 0);
	passenger* P3 = new passenger;
	P3->setPass(0, 0, 0, 3, 0);

	while (1)
	{
		system("CLS");
		//cout << flush;
		cout << "START ======================================================== START" << endl;
		

		L->update(P1, P2, P3, f1, f2);
		
		r.update(P1, P2, P3, L, f1, f2);

		

		P1->update(f1, f2);
		P2->update(f1, f2);
		P3->update(f1, f2);


		f1->update();
		f2->update();




		cout << "END ======================================================== END" << endl;
		//Sleep(1000);

		//char x = 'x';
		//cin >> x;

		system("PAUSE");
	}


}




