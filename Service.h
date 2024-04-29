#pragma once
#include "Weather.h"
class Service
{
protected:
	virtual Weather getWeather(std::string s) = 0;
	virtual ~Service() {};
};

