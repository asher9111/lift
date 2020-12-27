#pragma once

class fl00r
{
public:
	fl00r(bool passExistence = 0, bool button = 0, bool lamp = 0);
	bool passExistence = 0;
	bool button = 0;
	bool lamp = 0;

	int index = 0;

	 void update();
	 void set(int);
};