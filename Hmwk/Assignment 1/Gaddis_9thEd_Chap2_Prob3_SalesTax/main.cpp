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
#include <iomanip>
using namespace std;

//Global Constants
const float STTAX= .04;//declare state tax
const float COTAX= .02;//declare county tax
const unsigned char PRICE=95;

//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Initialize range Random Number Seed
    
    //Declare Variables
    //Initialize Variables
    double totSales = (PRICE*STTAX) + (PRICE*COTAX)+ PRICE; // declare and calculate the state and county tax
    
    //Map inputs to outputs -> The process
   
    
    
    //Display Results
    cout << fixed << setprecision(2);
      cout << "The total sales of 95$ including taxes is " << totSales << "$ " << endl;
    
    //Exit stage right
    return 0;
}

