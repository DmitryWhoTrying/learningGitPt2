#pragma once
#include <string>
class Weather
{
protected:
	std::string city;
	double lon;
	double lat;
	double temperature;
	std::string weather;
	double wingSpeed;
	int clouds;
public:
	Weather(std::string const& city, double const& lon, double const& lat, double const& temperature, std::string const& weather, double const& windSpeed, int const& clouds);
};

