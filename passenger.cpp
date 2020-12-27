#include "passenger.h"
#include "lift.h"
#include "fl00r.h"
#include <iostream>

using namespace std;

passenger::passenger()
{
	
	spawn = 0;
	destination = 0;
	birthTime = 0;
	sN = 0;
	
}

void passenger::update(lift* L, fl00r*  f1, fl00r* f2)
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

