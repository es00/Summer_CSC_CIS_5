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
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int in1,int in2,int in3,int& max,int& min)
{
     
    if (in1 >= in2 && in1 >= in3 ) max = in1;
    
    else if (in2 >= in1 && in2 >= in3 ) max = in2;
    
    else if (in3 >= in2 && in3 >= in1 ) max = in3;
    
    
    if (in1 <= in2 && in1 <= in3 ) min = in1;
    
    else if (in2 <= in1 && in2 <= in3 ) min = in2;
    
    else if (in3 <= in2 && in3 <= in1 ) min = in3;
   
   
};//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int min=0, max=0,input1, input2, input3;
    
    //Initialize Variables
    cout << "Input 3 numbers" << endl;
    cin  >> input1 >> input2 >> input3;
    
   minmax(input1,input2,input3, max, min);
    
    
    //Process/Map inputs to outputs
    
    //Output data
   
    if(min > 9)cout << "Min =" << min << endl;
    else cout << "Min = " << min << endl;
   
    if(max > 9)cout << "Max =" << max;
    else cout << "Max = " << max;
    
    //cout  <<"Min = " << input3 << endl;
    //cout << "Max = " << input2;
    
    //Exit stage right!
    return 0;
}