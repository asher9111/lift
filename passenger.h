#pragma once
#include "lift.h"
#include "fl00r.h"
#include <iostream>
using namespace std;


class passenger 
{
public:
	passenger();


	void update(lift* , fl00r* , fl00r* );

	void setPass(int = 0, int = 0, int = 0, int = 0);
	void yell();
	int getBirthday();

	~passenger();
protected:

	int spawn;
	int destination;
	int birthTime;
	int sN;


};