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
const unsigned char PERCENT=100; // Declare percentage 
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Initialize range Random Number Seed
    
    //Declare Variables
    //Initialize Variables
    
     float   perSales = .56, // declare variable percentage of sales
             totalSales = 8.6, /// declare the amount of sales
             genSales; // declare the generated sales 
     unsigned short disPercent = perSales*PERCENT; // declare the percent of sales;
    
    //Map inputs to outputs -> The process
     genSales= totalSales*perSales; // calculate and store the percentage of total sales
     
    //Display Results
    
     cout << "East Coast Sales Division generates " << disPercent << "% of " 
          << totalSales <<" million of dollars." << endl;
     
     cout << "East Coast Sales Division generated " << genSales << " million of dollars." << endl;

     
    //Exit stage right
    return 0;
}

