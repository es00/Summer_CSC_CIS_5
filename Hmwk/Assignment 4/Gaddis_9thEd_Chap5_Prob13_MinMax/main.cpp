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
    int in1[5], big , small;
    
    
    //Declare Variables
    
    
    //Initialize or input i.e. set variable values
    for (int i = 0; i <=5; i++ )
    {
        cin >> in1[i];
        
        if (in1[i] == -99)
        {
            break;
        }
    }
    
    big = small = in1[0];
    for (int i = 0 ; i <= 5; i++)
    {
        if(in1[i] > big)
        {
            big = in1[i];
        }
        
        if ( in1[i] == -99) 
        {
            break;
        }
        else if (in1[i] < small)
        {
            small = in1[i];
        }
    }
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Smallest number in the series is " << small << endl;
    cout << "Largest  number in the series is " << big;

    //Exit stage right or left!
    return 0;
}