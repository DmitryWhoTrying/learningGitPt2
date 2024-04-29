#include "Weather.h"

Weather::Weather(std::string const& city, double const& lon, double const& lat, double const& temperature, std::string const& weather, double const& windSpeed, int const& clouds)
{
	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->wingSpeed = windSpeed;
	this->clouds = clouds;
}
