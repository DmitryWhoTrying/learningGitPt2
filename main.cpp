#include "XmlService.h"

int main() 
{
	XmlService js;
	Weather w = js.getWeather("weather.xml");
}