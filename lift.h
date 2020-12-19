#pragma once
#include <iostream>
#include "respawner.h"
#include "timer.h"
#include "passenger.h"
using namespace std;


class lift : timer
{
public:
	lift();
	int Sn;
	
	void update();
private:

	bool passStatus;
	int button;									// 0=none           1234 = target floor
	int floor;									// 0 = in move      123 = current floor
	int startTime;
};
