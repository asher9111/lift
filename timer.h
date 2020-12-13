#pragma once


class timer 
{
public:
	timer();
	int getTime();
	int tick();
protected:
	int time;
};