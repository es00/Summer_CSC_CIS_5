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
const float CALEXCISETAX = .39,
        SALESTAX = .08,
        CAPFEE = .10,
        FEDEXCISETAX = .184,
        OILPROFIT = .065;

//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Initialize range Random Number Seed
    
    
    //Declare Variables
    //Initialize Variables
    
    float gasPrice, gallons, salesTax , oilProfit ;
    
    //Map inputs to outputs -> The process
    cout << "Calculate the percentage Gas Tax on a gallon of gas, and the profit made from a gallon of gas given" << endl;
    
    cout  << "How many Gallons did you purchase?" << endl;
    cin >> gallons;
    
    cout << "The price per gallon?" << endl;
    cin >> gasPrice;
    
    cout << endl;
    
    salesTax = (gallons*gasPrice)*SALESTAX;
    oilProfit = (gallons*gasPrice)*OILPROFIT;
    
    //Display Results
    cout << fixed << setprecision(2);
    cout << "State Sales Tax per gallon: $" << gallons* CALEXCISETAX << endl;
    cout << "Sales Tax for total purchase: $" << salesTax << endl;
    cout << "Cap and Trade tax: $"  << gallons*CAPFEE << endl;
    cout << "Federal Tax per Gallon: $" << gallons*  FEDEXCISETAX << endl;
    cout << "Oil Company profit: $" << oilProfit << endl;
    cout << "Total Cost: $" << gallons*gasPrice << endl;
    
    
    //Exit stage right
    return 0;
}

