#include "passenger.h"


#include <iostream>
//#include "fl00r.h"
using namespace std;

passenger::passenger()
{
	
	spawn = 0;
	destination = 0;
	birthTime = 0;
	sN = 0;
	
}

void passenger::update()
{
	// here will be amazing passenger code
}

void passenger::setPass(int a, int b, int c, int d)
{
	if (a < 3 && b < 3)
	{
		spawn = a;
		destination = b;
		birthTime = c;
		sN = d;
	}
	else
	{
		cout << "Pass set error" << endl;
		spawn = 0;
		destination = 0;
		birthTime = 0;
		sN = 0;
		
	}
}



void passenger::yell()
{
	cout << "birth!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! - time:" << birthTime << endl;
	cout << "passenger spawned on floor: " << spawn << endl;
}

int passenger::getBirthday()
{
	return birthTime;
}

passenger::~passenger()
{
	this;
	cout << "passenger destruction success" << endl;
}

