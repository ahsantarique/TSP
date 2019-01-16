#ifndef ALL_CITIES_HPP
#define ALL_CITIES_HPP

#include <vector>
#include <string>

#include "City.hpp"

using namespace std;

class AllCities{
    void readAllCities(char* path);

public:    
    vector <City> cities;
    
    AllCities(char* path);

    void printAllCities();
};

#endif