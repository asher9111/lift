#include "lift.h"
#include <iostream>
#include "respawner.h"
#include "timer.h"
#include "passenger.h"
using namespace std;




lift::lift()
{
	kill = 0;
}

lift::~lift()
{
}

void lift::update()

{
	cout << "lift update ---------" << endl;
	kill = 1;
}

