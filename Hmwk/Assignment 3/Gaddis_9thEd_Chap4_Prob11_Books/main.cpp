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
#include<iomanip> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int input;
    
    //Initialize or input i.e. set variable values
   cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> input;

    //Map inputs -> outputs
    
    //Display the outputs
    if(input == 0)
    {
        cout << "Books purchased =" << setw(3) << input << endl;
        cout <<"Points earned   =" << input;
    }
     else if(input == 1)
    {
        cout << "Books purchased =" << setw(3) << input << endl;
        cout <<"Points earned   =" << setw(3) << 5;
    }
      else if(input == 2)
    {
        cout << "Books purchased =" << setw(3) << input << endl;
        cout <<"Points earned   =" << setw(3) << 15;
    }  
      else if(input == 3)
    {
        cout << "Books purchased =" << setw(3) << input << endl;
        cout <<"Points earned   =" << setw(3) << 30;
    }
     else if(input >= 4 )
    {
        cout << "Books purchased =" << setw(3) << input << endl;
        cout <<"Points earned   =" << setw(3) << 60;
    }
    
    //Exit stage right or left!
    return 0;
}