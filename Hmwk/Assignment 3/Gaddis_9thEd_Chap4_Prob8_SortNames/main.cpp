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
    
    
    //Declare Variables
    string  nOne, nTwo, nThree;
  
    
    //Initialize or input i.e. set variable values
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    cin>> nOne >> nTwo >> nThree;
 
    
    if (nOne < nTwo && nOne < nThree)
    {
        cout << nOne << endl;
        if (nTwo < nThree)
        {
            cout << nTwo << endl;
            cout << nThree;
        }
        else 
        {
            cout << nThree << endl;
            cout << nTwo;
        }
    } else  if (nTwo < nOne && nTwo < nThree)
    {
        cout << nTwo << endl;
        if (nOne < nThree)
        {
            cout << nOne << endl;
            cout << nThree;
        }
        else 
        {
            cout << nThree << endl;
            cout << nOne;
        }
    }else if (nThree < nOne && nThree < nTwo)
    {
        cout << nThree << endl;
        if (nOne < nTwo)
        {
            cout << nOne << endl;
            cout << nTwo;
        }
        else 
        {
            cout << nTwo << endl;
            cout << nOne;
        }
    
}
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}