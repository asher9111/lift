#pragma once

#include "timer.h"
#include <iostream>
#include "respawner.h"
using namespace std;


class passenger 
{
public:
	passenger();


	void update();

	void setPass(int, int, int,int);
	void yell();
	int getBirthday();

	~passenger();
protected:

	int spawn;
	int destination;
	int birthTime;
	int sN;


};