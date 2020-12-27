#pragma once
#include "passenger.h"
#include "timer.h"
#include "lift.h"
#include "fl00r.h"




class respawner : public timer
{
public:
	respawner();
	~respawner();
	void update(passenger* , passenger* , passenger* , lift* ,fl00r* , fl00r* );											//getting 3 passengers + lift obj from main

protected:

	int passTime;
};