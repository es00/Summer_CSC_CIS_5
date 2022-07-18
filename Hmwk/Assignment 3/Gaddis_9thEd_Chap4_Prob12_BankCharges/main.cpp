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
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float SERIESONE = .1, SERIESTWO = .08, SERIESTHREE = .06, SERIESFOUR= .04, MONTH = 10, BELOW =15; 
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float balance, check , checkFee, newBalance , lowFee;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cout << "Monthly Bank Fees" << endl;
    
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    
    cin >> balance >> check;
    
    if (check < 20)
    {
        checkFee = check*SERIESONE;
    }else if( check >= 20 && check <= 39)
    {
        checkFee = check*SERIESTWO;
    }else if( check >= 40 && check <= 59)
    {
        checkFee = check*SERIESTHREE;
    }else if( check >=60)
    {
        checkFee = check*SERIESFOUR;
    }
    
    if ( balance < 400)
    {
        lowFee =BELOW;
        newBalance = balance - checkFee - MONTH - BELOW;
    }else
    {
        lowFee=0;
        newBalance = balance - checkFee - MONTH;
    }
    
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << fixed << setprecision(2);
    cout << "Balance     $" << setw(9) << balance << endl;
    cout << "Check Fee   $" << setw(9) << checkFee << endl;
    cout << "Monthly Fee $" << setw(9) << MONTH << endl;
    cout << "Low Balance $" << setw(9) << lowFee << endl;
    cout << "New Balance $" << setw(9) << newBalance;
    //Exit stage right or left!
    return 0;
}