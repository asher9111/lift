#pragma once

#include "fl00r.h"
#include <iostream>
using namespace std;


class passenger 
{
public:
	passenger();


	void update( fl00r* , fl00r* );

	void setPass(int = 0, int = 0, int = 0, int = 0,int =-1);
	void yell();
	int getBirthday();

	~passenger();

	int sN;
	int spawn;
	int destination;
	int status;
protected:

	
	int birthTime;
	

};