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
const int PAYAMOUNT = 2200;//declare state tax
const int PAYPERIODS = 26;//declare county tax
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Initialize range Random Number Seed
    
    //Declare Variables
    //Initialize Variables
    unsigned short annualPay= PAYAMOUNT*PAYPERIODS;// declare and calculate the annual pay
    //Map inputs to outputs -> The process

    //Display Results
    cout << "Pay every two weeks is $" << PAYAMOUNT << endl; 
    cout << "Pay period per year is " << PAYPERIODS << " weeks" << endl;
    cout << "The annual pay is $" << annualPay << endl;
    
    //Exit stage right
    return 0;
}

