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
#include <iomanip> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float liter, gallon, miles;
    char r;
    bool redo =  true;
    //Initialize or iput i.e. set variable values
    
    //Map inputs -> outputs
    
    
    do
    {
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> liter;
        
        cout << endl;
        
        cout << "Enter number of miles traveled:" << endl;
        
        cin >> gallon;
        cout << endl;
        
        cout << "miles per gallon:" << endl;
        miles  = gallon/(liter*0.264179);
        cout << fixed << setprecision(2);
        cout << miles;
        
        cout << endl;
        
        cout << "Again:" << endl;
        cin >> r;
        if (r == 'n' || r == 'N')
        {
            exit(1);
            redo = false;\
            
        }else cout << endl;
    }while(redo);
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}