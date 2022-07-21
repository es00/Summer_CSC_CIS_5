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

///System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int number)
{
    int count =0;
    for ( int x=2; x < number; x++)
        {if ( number % x == 0)
            count++;
        }  
        if ( count > 1) return false;
        
        else return true;
        
};//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    
    //Initialize Variables
    cout << "Input a number to test if Prime." << endl;
    cin >> num;
    
    if (isPrime(num) == true) cout << num << " is prime.";
  
    else cout << num << " is not prime.";
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}