#include "XmlService.h"
#include "JsonService.h"
int main() 
{
	JsonService js;
	XmlService xml;
	Weather w1 = js.getWeather("weather.json");
	Weather w2 = xml.getWeather("weather.xml");
}