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
#include <string> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string inputOne, inputTwo;
    
    //Initialize or input i.e. set variable values
    cout << "Horoscope Program which examines compatible signs." << endl;   
    
    cout  << "Input 2 signs."<< endl;
    cin >> inputOne >> inputTwo;
    //Map inputs -> outputs
    if(inputOne == "Taurus" or inputOne == "Virgo" or inputOne == "Capricorn")
    {
        if(inputTwo == "Taurus" or inputTwo == "Virgo" or inputTwo == "Capricorn")
            cout << inputOne << " and " << inputTwo << " are compatible Earth signs."; 
        else
            cout << inputOne << " and " << inputTwo << " are not compatible signs.";
    }else if(inputOne == "Aries" or inputOne == "Leo" or inputOne == "Sagittarius")
    {
        if(inputOne == "Aries" or inputOne == "Leo" or inputOne == "Sagittarius")
            cout << inputOne << " and " << inputTwo << " are compatible Fire signs."; 
        else
            cout << inputOne << " and " << inputTwo << " are not compatible signs.";
    }else if(inputOne == "Aries" or inputOne == "Libra" or inputOne == "Aquarius")
    {
        if(inputOne == "Aries" or inputOne == "Libra" or inputOne == "Aquarius")
            cout << inputOne << " and " << inputTwo << " are compatible Air signs."; 
        else
            cout << inputOne << " and " << inputTwo << " are not compatible signs.";
    }else if(inputOne == "Cancer" or inputOne == "Scorpio" or inputOne == "Pisces")
    {
        if(inputOne == "Cancer" or inputOne == "Scorpio" or inputOne == "Pisces")
            cout << inputOne << " and " << inputTwo << " are compatible Water signs."; 
        else
            cout << inputOne << " and " << inputTwo << " are not compatible signs.";
    }

    return 0;
}