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
using namespace std;

//Global Constants

const short MILES = 375;
const short GALLON = 15;
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Initialize range Random Number Seed
    
    //Declare Variables
    //Initialize Variables
    double MPG = MILES/GALLON;
    
    
    
    //Map inputs to outputs -> The process
    
    //Display Results
    cout  << "The MPG for a car that holds " << GALLON << " gallons "
            "and can drive " << MILES << " miles is " << MPG << endl;
            
    
    //Exit stage right
    return 0;
}

