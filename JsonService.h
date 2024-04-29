#pragma once
#include "Service.h"
#include "json.hpp"
#include <fstream>
class JsonService : public Service
{
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};

