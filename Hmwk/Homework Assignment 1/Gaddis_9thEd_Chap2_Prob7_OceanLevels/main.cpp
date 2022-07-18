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

const double RISE = 1.5 ;//declare rise of ocean level

//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Initialize range Random Number Seed
    
    //Declare Variables
    //Initialize Variables
    double rFive  = RISE*5, //declare and calculate 5 ,7 10 years
           rSeven = RISE*7,
           rTen   = RISE*10;
    
    //Map inputs to outputs -> The process

    //Display Results
    
    cout << "The ocean will be higher : " << rFive << " millimeters in 5 years" << endl;
     cout << "The ocean will be higher : " << rSeven << " millimeters in 7 years" << endl;
      cout << "The ocean will be higher : " << rTen << " millimeters in 10 years" << endl;
    //Exit stage right
    return 0;
}

