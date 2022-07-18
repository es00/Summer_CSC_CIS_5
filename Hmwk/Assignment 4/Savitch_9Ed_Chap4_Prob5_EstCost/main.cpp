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
    
    //Declare Variables
    float price1, price2, percent, y1, y2;
    bool rerun =true;
    char re;
    //Initialize or input i.e. set variable values
    do{
    cout << "Enter current price:" << endl;
    cin >> price1;
    cout << "Enter year-ago price:" << endl;
    cin >> price2;
    
    percent= ((price2 - price1)/price2)*-100;
    cout << fixed << setprecision(2);
    //Map inputs -> outputs
    cout << "Inflation rate: " << percent << "%" << endl;
    cout << endl;
    
    
    
    
    
    y1= ((percent/100)*price1) + price1;
    
    cout << "Price in one year: $" << y1 << endl;
   
    y2 = ((percent/100)*y1)  + y1;
   
    cout << "Price in two year: $" << y2 << endl; 
    cout << endl;
    
    cout << "Again:" << endl;
    cin >> re;
    
 
    if(re == 'n')
        break;
    
    cout << endl;
    
    }while(rerun);
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}