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

///System Libraries
#include <iostream>
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    int i1, temp = 1;
    double pay=0.01, finalPay=0;
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cin >> i1;
    if (i1 < 1)exit(1);
    
    //Map inputs -> outputs
    while (i1 >= temp)
    {
        finalPay=finalPay+pay;
        pay=pay*2;
        temp++;
    }
    cout << fixed << setprecision(2);
    //Display the outputs
    cout << "Pay = $" << finalPay;
    //Exit stage right or left!
    return 0;
}