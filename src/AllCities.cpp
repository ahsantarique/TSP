#include "AllCities.hpp"

#include <cstdio>
#include <iostream>
#include <fstream>
#include <sstream>

void AllCities::readAllCities(char* path){
    string line;
    ifstream input(path);
    bool firstline = true;

    int cityId;
    double x,y;

    while(getline(input, line)){
        if(firstline){
            firstline = false;
            continue;
        }
        for(int i=0; i < line.size(); i++){
            if(line[i]==',') line[i] = ' ';
        }
        // cout << line << endl;
        sscanf(line.c_str(), "%d %lf %lf", &cityId, &x, &y);
        // cout << cityId << " " << x << " " << y << endl;
        cities.push_back(City(x,y));
    }
}

void AllCities::printAllCities(){

    for (int i=0; i < cities.size(); i++){
        cout << cities[i].x << " " << cities[i].y << endl;
    }
}

AllCities::AllCities(char* path){
    readAllCities(path);
}