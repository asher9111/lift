#pragma once

#include "timer.h"
#include <iostream>
using namespace std;



class respawner : public timer
{
public:
	respawner();
	int update();

protected:

	int passTime;

};