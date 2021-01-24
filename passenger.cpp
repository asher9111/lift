#include "passenger.h"
#include "fl00r.h"
#include <iostream>
using namespace std;
 

passenger::passenger()
{
	
	spawn = 0;
	destination = 0;
	birthTime = 0;
	sN = 0;
	status = 0;										// 1 = in lift   0= on floor

	cout << "passenger constructor done !" << endl;
	
}

void passenger::update( fl00r*  f1, fl00r* f2)
{
	
	//cout << "passenger " << sN << " update" << endl;

	//cout << " spawn-" << spawn << " destination-" << destination << " Birth-" << birthTime << " in lift-" << status << endl;




	if (status == 0)
	{
		if (spawn == 1)
		{ 
			f1->button = true;
			f1->passExistence = 1;
		}

		if (spawn == 2)
		{
			f2->button = true;
			f2->passExistence = 1;
		}
	}
	else
	{
		// do stuff in lift
		cout << "im in lift" << endl;
		status = 1;

	}





}

void passenger::setPass(int a, int b, int c, int d,int e)
{
	if (a < 3 && b < 3)
	{
		spawn = a;
		destination = b;
		birthTime = c;
		sN = d;
		status = e;

		cout << "setPass done" << " spawn-" << a << " dest-" << b << " birth-" << c << " sN-" << sN << " status-" << e << endl;
	}
	else
	{
		cout << "Pass set error" << endl;
		spawn = 0;
		destination = 0;
		birthTime = 0;
		sN = 0;
		status = 0;
	}
}



void passenger::yell()
{
	
	cout << "passenger spawned on floor: " << spawn << "   time "<< birthTime << endl;
}

int passenger::getBirthday()
{
	return birthTime;
}

passenger::~passenger()
{

	cout << "passenger destruction success" << endl;
}

