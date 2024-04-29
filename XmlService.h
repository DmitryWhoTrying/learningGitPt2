#pragma once
#include "Service.h"
#include "pugixml.hpp"
class XmlService : Service 
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};

