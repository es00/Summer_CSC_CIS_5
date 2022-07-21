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
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int n )
{
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
    
};//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int finput;
    //Initialize Variables
    cout << "This program calculates the factorial using a function prototype found in the template for this problem." << endl;
    cout << "Input the number for the function." << endl;
    cin >> finput;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout << finput << "! = " << fctrl(finput);
    //Exit stage right!
    return 0;
}