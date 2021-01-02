#pragma once

#include "fl00r.h"
#include "timer.h"
#include "passenger.h"
using namespace std;


class lift : timer
{
public:
	lift();
	~lift();
	int kill;
	
	void update(passenger*, passenger*, passenger*,fl00r*, fl00r*);
private:

	bool passStatus=0;
	int button=0;									// 0=none           1234 = target floor
	
	

	int state = 0;									//0 idle, -1 move, 1 floor, 2 floor

	int startTime = 0;
	int endTime = 0;
	int move = 0;

	int liftDest = 0;
};
