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
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
// void  init(int [],int);//Initialize the array
// void  print(int [],int,int);//Print the array
// void  revrse(int [],int);;//Reverse the array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    //Initialize or input i.e. set variable values
   // init(test,SIZE);
    for (int i = 0; i < 50 ; i++)
    {
        cin >> test[i];
    }
     for (int i = 49; i >= 0 ; i--)
    {
        cout << test[i] << " ";
    
        if (i == 40 || i == 30 || i == 20 || i ==10 || i==0 ) cout << endl;
    }
    //Display the outputs
  //  print(test,SIZE,10);
    
    //Reverse the Values
   // revrse(test,SIZE);
   // 
    //Display the outputs
  //  print(test,SIZE,10);

    //Exit stage right or left!
    return 0;
}