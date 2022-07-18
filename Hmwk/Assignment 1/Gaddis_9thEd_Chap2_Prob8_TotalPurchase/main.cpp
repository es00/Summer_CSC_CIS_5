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

const double ITEMA = 15.95; // Declare the price of 6 items
const double ITEMB = 24.95;
const double ITEMC = 6.95;
const double ITEMD = 12.95;
const double ITEME = 3.95;

const double TAX = .07; //Declare the sales tax

//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Initialize range Random Number Seed
    
    //Declare Variables
    //Initialize Variables
    double subTotal = ITEMA+ITEMB+ITEMC+ITEMD+ITEME; // declare and calculate 
    
    double tax = subTotal*TAX;
    
    double total= subTotal + tax;
    
    
    
    //Map inputs to outputs -> The process
    
    //Display Results
    cout  << fixed << setprecision(2); // set to two decimal points
     
    cout << "The sub total for 5 items is:    $" << subTotal << endl;
    cout << "The sales tax is:                 $" << tax << endl;
    cout << "The total Amount is:             $" << total << endl;
    //Exit stage right
    return 0;
}

