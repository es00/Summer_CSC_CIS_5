/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Elias Silva
 * Purpose: C++ Template To be used in all future Assignments
 *
 * Created on June 23, 2022, 8:28 PM
 */

//System Libraries
#include <iostream> 
#include <iomanip> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    char iput;
    int hr;
    double pacA = 9.95, pacB=14.95, pacC = 19.95;
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> iput;
    cin >> hr;
    
    cout << fixed << setprecision(2);
    //Map inputs -> outputs
    if(iput == 'A' or iput == 'a')
    {
        if( hr > 10)
            pacA = 9.95 + ((hr - 10 )*2);
        
     
        cout << "Bill = $ " << setw(4) << pacA;
    }
    else if(iput == 'B' or iput == 'b')
    {
        if(hr > 20)
            pacB +=(hr-20)*1;

       cout << "Bill = $ " << setw(4) << pacB;
    }
    else if(iput == 'C' or iput == 'c')
    {
       cout << "Bill = $ " << setw(4) << pacC;
    }
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}