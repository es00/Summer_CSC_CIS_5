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

//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Initialize range Random Number Seed
   
    //Declare Variables
     float gPercentage, //Input of gas gauge
             sGallon, // input of size of gas tank
             mpg, // input of MPG
             fill, // variable to calculate gas fill
             gPrice, // input of gas price per gallon
             cFill, // calculate the cost to fill tank
             dStation,// input the distance to gas station
             tDistance,// input the total distance to/from gas station
             cDistance,// calculate cost of of total distance to/from gas station
             sCost, // calculate total cost to drive to/from gas station
             dgCost, // calculate the total cost of gallon with to/from gas station
             tCost; // calculate the cost to fill with cost to/from gas station
             
    //Initialize Variables
     cout << "Knowns of Your Particular Vehicle "  << endl;
     cout << endl;
     
     cout << "what is the percentage of gas gauge % ";
     cin >> gPercentage;
   
     cout << "How many gallon does the vehicle hold ";
     cin >> sGallon;
  
     cout << "What is the MPG of vehicle ";
     cin >> mpg;
    
     fill = sGallon-(sGallon*(gPercentage/100));
     
         
    //Map inputs to outputs -> The process
    
    //Display Results
     
     cout << "Gallon require to fill up: " << fill << endl;
     cout  << endl;
     
     //Initialize Variables
     cout << "Calculate the cost of Gas Station 1"  << endl;
     cout << endl; 
     
     cout << "What is the price per gallon $";
     cin >> gPrice;
     cout << "Miles to the Gas Station ";
     cin >> dStation;
     
     cFill = gPrice * fill;
     
 
     cout << "Cost to fill up is: $" << cFill << endl;
               
     cout << "What is the total miles from and to Gas Station ";
     cin >> tDistance;
         
     sCost = (tDistance/mpg)*gPrice;
     
     cout << "Total cost to drive to Gas Station is $" << sCost << endl; 
     
     tCost = cFill + sCost;  
    
     cout << "Total Cost with mileage to gas station: $" << tCost << endl;
     
     dgCost = tCost/fill;
     
     cout << fixed << setprecision(8);
     cout << "Price per gallon with added mileage to Gas Station $" << dgCost << endl; 
     cout  << endl; 
     
     cout << "Calculate the cost of Gas Station 2"  << endl;
     cout << endl; 
     
     cout << "What is the price per gallon $";
     cin >> gPrice;
     cout << "Miles to the Gas Station ";
     cin >> dStation;
     
     cFill = gPrice * fill;
     
     cout << fixed << setprecision(3);
     cout << "Cost to fill up is: $" << cFill << endl;
     
     cout << "What is the total miles from and to Gas Station ";
     cin >> tDistance;
         
     sCost = (tDistance/mpg)*gPrice;
     cout << fixed << setprecision(8);
     cout << "Total cost to drive to Gas Station is $" << sCost << endl; 
     
     tCost = cFill + sCost;  
    
     cout << "Total COst with mileage to gas station: $" << tCost << endl;
     
     dgCost = tCost/fill;
     
     
     cout << "Price per gallon with added mileage to Gas Station $" << dgCost << endl; 
     
    //Exit stage right
    return 0;
}

