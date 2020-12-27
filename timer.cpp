#include "timer.h"
#include <iostream>
using namespace std;

timer::timer()
{
	time = 0;
	
}



int timer::tick()
{
	time++;
	//cout << "update timer " << endl;
	cout << "current time - " << time << endl << endl;
	return time;
}

int timer::getTime()
{
	return time;
}