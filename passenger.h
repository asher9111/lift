#pragma once

#include <iostream>
using namespace std;


class passenger 
{
public:
	passenger();


	void update();

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