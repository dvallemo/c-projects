#include <iostream>
#include <cmath>  // double sin(double), double cos(double)
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
//#include "functionWind.h"



using namespace std;

// const for pi
const double pi = 3.14159265358979323846;

int main() {

    cout << "########" << endl;
    cout << "Problem One" << endl;
    cout << "########" << endl;


    ifstream thefile;
    int number;
    thefile.open("robotpath.dat"); //reading file
    

    // write your code here

    // first read file robotpath.dat and name it thefile

    //check if thefile exist or not
    if (thefile.is_open())
    {
        cout << "File is open and ready" << '\n';
        cout << " " << '\n';
    
        while(thefile >> number)
        {
            cout << number << endl;
        }
        thefile.close();
        
        

    }
    else{
        cout << "File not found!" << '\n';
        cout << " " << '\n';
    }

    // define your variables
    // use defined constant pi value
    // start reading file and do calculation


    // while reading print the following for each line:
    //  - print distance and angle
    //  - print angle in rad
    //  - print x and y location
    //  - check your conversion and print angle in rad after finding x and y
    // don't forget to close your opened file


    cout << "====[ end ]====" << endl;

    cout << "########" << endl;
    cout << "Problem Two" << endl;
    cout << "########" << endl;
    //Write your code here
    // before you write here, write windChillFactor  in functionWind.cpp

    // use Boolean CanRun to decide to do calculation or not based on condition
    bool canRun = true;
    // define your input value and other variable

    // print out message to enter wind speed and take the input
    // Check if speed condition

    // print out message to enter temperature and take the input
    // check if temperature condition

    // check if all condition is met and use canRun to start calculation of  wind chill
    // print out the value



    cout << "====[ end ]====" << endl;

    return 0;
}
