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
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
     int inP ;
     
    //Declare Variables
    cin >> inP;
    //Initialize or input i.e. set variable values
    for (int j = 1; j <= inP; j++)
    {
        for (int i = 0; i < j; i++)
            cout << "+";
            cout << endl;
            cout << endl;
    }
   for (int j = 1; j <= inP; j++)
    {
        for (int i = 0; i <= inP - j; i++)
            cout << "+";
            
        if(j == inP)break;
            cout << endl;
            cout << endl;
    }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}