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
#include<cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
  
    float money, in, interest, years, fx;
    
    //Initialize Variables
    cout << "This is a Present Value Computation" << endl;
   
    cout << "Input the Future Value in Dollars" << endl;
    
    cin >> money;
    
    cout << "Input the Number of Years" << endl;
    cin >> years;
    
    cout << "Input the Interest Rate %/yr" << endl;
    
    cin >> in;
    
    interest = 1  +in/100;
    
    fx = (money) / pow(interest,years);
    
    cout << fixed << setprecision(2);
    cout << "The Present Value = $";
    cout << fx;
    
    //Process/Map inputs to outputs
    
    //Output data
   
    
    //Exit stage right!
    return 0;
}