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
    int inputOne, temp;
    char n1000s,n100s,n10s,n1s;
    
    
    //Initialize or input i.e. set variable values
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    cin >> inputOne;
    
    temp = inputOne;
    
    //Map inputs -> outputs
    n1000s=inputOne/1000;
    inputOne-=n1000s*1000;
    n100s=inputOne/100;
    inputOne-=n100s*100;
    n10s=inputOne/10;
    inputOne-=n10s*10;
    n1s=inputOne;
    
    if (temp < 1000 || temp > 3000)
    {
        cout << temp  << " is Out of Range!";
        exit(1);
    }
     
    
    cout << temp << " is equal to ";
        
        switch(n1000s)
        {
            case 3: cout << "M";
            case 2: cout << "M";
            case 1: cout << "M";
        }
        
        switch(n100s)
        {
            case 9: cout << "CM"; break;
            case 8: cout << "DCCC"; break;
            case 7: cout << "DCC"; break;
            case 6: cout << "DC"; break;
            case 5: cout << "D"; break;
            case 4: cout << "CD"; break;
            case 3: cout << "C"; 
            case 2: cout << "C"; 
            case 1: cout << "C"; 
        }
        switch(n10s)
        {
            case 9: cout << "XC"; break;
            case 8: cout << "LXXX"; break;
            case 7: cout << "LXX"; break;
            case 6: cout << "LX"; break;
            case 5: cout << "L"; break;
            case 4: cout << "XL"; break;
            case 3: cout << "X"; 
            case 2: cout << "X"; 
            case 1: cout << "X"; 
        }
        switch(n1s)
        {
            case 9: cout << "IX"; break;
            case 8: cout << "VIII"; break;
            case 7: cout << "VII"; break;
            case 6: cout << "VI"; break;
            case 5: cout << "V"; break;
            case 4: cout << "IV"; break;
            case 3: cout << "I"; 
            case 2: cout << "I"; 
            case 1: cout << "I"; 
        }
        
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}