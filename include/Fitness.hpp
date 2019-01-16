#ifndef FITNESS_HPP
#define FITNESS_HPP

#include "AllCities.hpp"
#include <cmath>

class Fitness{
    double getDistance(const City &a, const City &b){
        return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    }
    double getScore(vector <int> path, const AllCities & allcities){
        double score = 0;
        for(int i = 0; i < path.size()-1; i++){
            double step = getDistance(allcities.cities[i], allcities.cities[i+1]);
        }
    }
};

#endif