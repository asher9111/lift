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
	int floor=1;									// 0 = in move      123 = current floor
	

	int state = 0;

	int startTime = 0;
	int endTime = 0;
	int move = 0;
};
