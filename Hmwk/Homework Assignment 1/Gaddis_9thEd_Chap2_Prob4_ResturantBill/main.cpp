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
const float TAX = .0675;//declare state tax
const float TIP = .20;//declare county tax
const float PRICE = 88.67;// declare price.

//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Initialize range Random Number Seed
    
    //Declare Variables
    //Initialize Variables
    double tip = PRICE*TIP, // declare and calculate tip 
          tax = PRICE*TAX,// declare and calculate tax
          total;// declare total
    
    
    //Map inputs to outputs -> The process
    total = tip+tax+PRICE;// calculate and set total 
    
    
    //Display Results
    
    cout  << fixed << setprecision(2); // set two decimal points
    
    cout << "     RESTURANT BILL" << endl;
    cout << "MEAL COST:          $" << PRICE << endl;
    cout << "TAX AMMOUNT:        $" << tax << endl;
    cout << "TIP AMMOUNT:        $" << tip << endl;
    cout << "_________________________ " << endl;
    cout << "TOTAL:              $" << total << endl;
    
    //Exit stage right
    return 0;
}

