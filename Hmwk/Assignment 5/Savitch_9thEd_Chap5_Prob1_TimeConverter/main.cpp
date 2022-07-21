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

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
  
    int hr, min, redo = true;
    char re, dec;
    //Initialize Variables
    cout << "Military Time Converter to Standard Time" << endl;
     cout   << "Input Military Time hh:mm" << endl;
    do{
        
    
   
   
    cin >>hr >>dec >> min;
    
    if(hr > 24 || min > 60) 
        {
           if (hr< 10)
        {
            cout << "0" << hr << ":";
            
        }else cout << hr << ":";
        
        if(min < 10) cout << "0" << min;
        else cout << min;
         
        cout << " is not a valid time" <<endl;
         
        }
    else if(hr>=12 && hr <=24 && min <= 60)
    {
       
        if (hr< 10)
        {
            cout << "0" << hr << ":";
            
        }else cout << hr << ":";
        
        if(min < 10) cout << "0" << min;
        else cout << min;
         
        cout << " = ";
        if(hr== 12) hr = 12;
        else
        hr-=12;
        if (hr< 10)
        {
            cout << hr << ":";
            
        }else cout << hr << ":";
        if(min < 10) cout << "0" << min << " PM" << endl;
        else cout << min <<  " PM" << endl;
        
    }else 
    {
        if (hr< 10)
        {
            cout << "0" << hr << ":";
             if(min < 10) cout << "0" << min;
             else  cout << min;
             
        }else 
        {
            cout << hr << ":";
            if(min < 10) cout << "0" << min;
            else cout << min;
        }
         
        cout << " = ";
        if(hr == 0) hr= 12;
        
        
        if (hr< 10)      
        {
            cout << "0" << hr ;
        }else cout << hr << ":";
        if(min < 10) cout << "0" << min << " AM" << endl;
        else cout << min <<  " AM" << endl;
      
    }
        
    cout << "Would you like to convert another time (y/n)" << endl;
   cin >> re;
    
    if(re== 'Y' || re=='y') redo = true;
    else redo=false;
    
    }while(redo);
    
    //Process/Map inputs to outputs
    
    //Output data
   

    //Exit stage right!
    return 0;
}