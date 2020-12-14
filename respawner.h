#pragma once

#include "timer.h"
#include <iostream>
using namespace std;



class respawner : public timer
{
public:
	respawner();
	int update();
	void kill();

protected:

	int passTime;
	passenger* Ptr1;
	passenger* Ptr2;
	passenger* Ptr3;

};