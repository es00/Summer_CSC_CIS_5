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
#include <string> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    string nameO, nameT, nameTH;
    int timeRunOne, timeRunTwo, timeRunThree ;
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cout <<"Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cout << "Their names, then their times" << endl;
    cin >> nameO >> timeRunOne;
    cin >> nameT >>  timeRunTwo;
    cin >> nameTH >> timeRunThree;
    
    
    
    //Map inputs -> outputs
    if(timeRunOne < timeRunTwo && timeRunOne < timeRunThree)
    {
        cout << nameO << "\t" << setw(3) << timeRunOne << endl;
        if( timeRunTwo < timeRunThree)
        {
            cout << nameT << "\t" << setw(3) << timeRunTwo << endl;
            cout << nameTH << "\t" << setw(3) << timeRunThree;
        
        }
        else
        {
            cout << nameTH << "\t" << setw(3) << timeRunThree<< endl;
            cout << nameT << "\t" << setw(3) << timeRunTwo;
        }
    }
    else if (timeRunTwo < timeRunOne && timeRunTwo < timeRunThree)
    {
        cout << nameT << "\t" << setw(3) << timeRunTwo << endl;
        if( timeRunOne < timeRunThree)
        {
            cout << nameO << "\t" << setw(3) << timeRunOne << endl;
            cout << nameTH << "\t" << setw(3) << timeRunThree;
        
        }
        else
        {
            cout << nameTH << "\t" << setw(3) << timeRunThree<< endl;
            cout << nameO << "\t" << setw(3) << timeRunOne;
        }
    }
    if (timeRunThree < timeRunOne && timeRunThree < timeRunTwo)
    {
        cout << nameTH << "\t" << setw(3) << timeRunThree << endl;
        if( timeRunOne < timeRunTwo)
        {
            cout << nameO << "\t" << setw(3) << timeRunOne << endl;
            cout << nameT << "\t" << setw(3) << timeRunTwo;
        
        }
        else
        {
            cout << nameT << "\t" << setw(3) << timeRunTwo<< endl;
            cout << nameO << "\t" << setw(3) << timeRunOne;
        }
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}