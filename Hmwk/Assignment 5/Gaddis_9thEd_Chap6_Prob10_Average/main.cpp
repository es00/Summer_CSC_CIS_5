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
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void getScre(int& a, int& b,int& c, int& d, int& e)
{
        
    cout << "Find the Average of Test Scores" << endl;
    cout <<  "by removing the lowest value." << endl;
    cout << "Input the 5 test scores." << endl;
    cin >> a >> b >>c>>d >>e;
    
    
}

float calcAvg(int a,int b,int c,int d,int e)
{
    float lowest;
    
    if(a < b & a < c & a < d & a < e ) return (b+c+d+e)/4;
 
    if(b < a & b < c & b < d & b < e ) return (a+c+d+e)/4;
    
    if(c < b & c < a & c < d & c < e ) return (b+a+d+e)/4;
    
    if(e < b & e < c & e < d & e < a ) return (b+c+d+a)/4;

    if(d < b & d < c & d < a & d < e ) return (b+c+a+e)/4; 
}
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
        int score1, score2, score3, score4, score5;
        float ave;
        
    //Initialize Variables
   
    getScre(score1,score2,score3,score4,score5);
    

    //Process/Map inputs to outputs
    ave = calcAvg(score1, score2, score3,score4, score5);
    //Output data
   
   cout << fixed  << setprecision(1);
    cout << "The average test score = " << ave;
    //Exit stage right!
    return 0;
}