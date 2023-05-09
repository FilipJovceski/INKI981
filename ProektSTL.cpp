#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <ctime>

using namespace std;


struct WeatherMK
{
    string city;
    int day_temp;
    int night_temp;

    bool operator<(const WeatherMK& other) const
    {
        return day_temp > other.day_temp;
    }
};


vector<WeatherMK> fillWeatherData()
{
    vector<WeatherMK> weather_data;
    for (int i = 1; i <= 10; i++)
    {
        string city;
        int day_temp, night_temp;
        cout << "Vnesete podatoci za zapis " << i << ":" << endl;
        cout << "Grad: ";
        getline(cin, city);
        cout << "Denska temperatura: ";
        cin >> day_temp;
        cout << "Nokjna temperatura: ";
        cin >> night_temp;
        cin.ignore();
        weather_data.push_back({ city, day_temp, night_temp });
    }
    return weather_data;
}


void printWeatherData(const vector<WeatherMK>& weather_data)
{
    for (auto& data : weather_data)
    {
        cout << "Grad: " << data.city << ", Denska temperatura: " << data.day_temp << ", Nokjna temperatura: " << data.night_temp << endl;
    }
}


void sortWeatherData(vector<WeatherMK>& weather_data)
{
    sort(weather_data.begin(), weather_data.end());
}


void saveWeatherDataToFile(const vector<WeatherMK>& weather_data)
{
    time_t now = time(0);
    tm* date = localtime(&now);
    string file_name = "INKI981.Weather" + to_string(date->tm_mon + 1) + to_string(date->tm_mday) + ".txt";
    ofstream output_file(file_name);
    if (output_file.is_open())
    {
        for (auto& data : weather_data)
        {
            output_file << "Grad: " << data.city << ", Denska temperatura: " << data.day_temp << ", Nokjna temperatura: " << data.night_temp << endl;
        }
        output_file.close();
        cout << endl << "Uspesno zacuvan dokument " << file_name << endl;
    }
    else
    {
        cout << endl << "Greska pri otvoranje na dokumentot " << file_name << " vo cekanje" << endl;
    }
}

int main()
{
    vector<WeatherMK> weather_data = fillWeatherData();
    cout << "\nSortirana sodrzina kako vektor:" << endl;
    printWeatherData(weather_data);
    sortWeatherData(weather_data);
    cout << "\nSortirana sozdrzina od vektorot:" << endl;
    printWeatherData(weather_data);
    saveWeatherDataToFile(weather_data);
    return 0;
}