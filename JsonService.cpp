#include "JsonService.h"

using nlohmann::json;

Weather JsonService::getWeather(std::string s)
{
    json j;
    std::ifstream fin(s);
    if (!fin)
        throw std::exception("No such file or directory");
    j = json::parse(fin);
    std::string city = j["name"].get<std::string>();
    double lon = j["coord"]["lon"].get<double>();
    double lat = j["coord"]["lat"].get<double>();
    double temperature = j["main"]["temp"].get<double>();
    std::string weather = j["weather"]["description"].get<std::string>();
    double windSpeed = j["wing"]["speed"].get<double>();
    int clouds = j["clouds"]["all"]; // 100
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}
