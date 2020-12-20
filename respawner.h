#pragma once
#include "passenger.h"
#include "timer.h"
#include <iostream>
#include "lift.h"
using namespace std;



class respawner : public timer
{
public:
	respawner();
	~respawner();
	int update(passenger* , passenger* , passenger* , lift* );											//getting 3 passengers + lift obj from main

protected:
	int passTime;
};