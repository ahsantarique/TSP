#include <iostream>

#include "AllCities.cpp"
using namespace std;

int main(int argc, char ** argv){
    if(argc != 2){
        cout << "wrong number of arguments" << endl;
        exit(1);
    }

    AllCities allCities(argv[1]);
    // allCities.printAllCities();

    return 0;
}