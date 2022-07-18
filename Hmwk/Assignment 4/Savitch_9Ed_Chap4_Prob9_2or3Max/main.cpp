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
//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float one, two , three , large, small;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout <<    "Enter first number:" << endl;
    cin >> one;
    cout << endl;
    
    cout << "Enter Second number:" << endl;
    cin >> two;
    cout << endl;
    
     cout << "Enter third number:" << endl;
     cin >> three;
     cout << endl;
     
    small= (one>two)? one:two;
    large = (one>two) ? ((one>three) ? one : three) : ((two>three) ? two : three) ;
     
     cout <<"Largest number from two parameter function:" << endl;  
     cout << small << endl;
     cout << endl;
     cout << "Largest number from three parameter function:" << endl;
     cout << large << endl;
     
    //Display the outputs

    //Exit stage right or left!
    return 0;
}