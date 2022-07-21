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
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
     int hr, min, wait;
     char daytime, re, am='AM', pm = 'PM';
     bool redo = true;
     
    //Declare Variables
   do
   {
    cout << "Enter hour:" << endl;
    cin >> hr;
    cout << endl;
    cout << "Enter minutes:" << endl;
    cin >> min;
    cout << endl;
    cout << "Enter A for AM, P for PM:" << endl;
    cin >> daytime;
    cout << endl;
    cout << "Enter waiting time:" << endl;
    cin >> wait;
    cout << endl;
    
    if ( daytime =='A'|| daytime =='a') 
    {
        daytime = 'a';
        cout << "Current time = "; 
        if(hr<10) cout << "0" << hr;
        else  cout << hr;
        if (min < 10) cout << ":0" << min << " AM";
        else cout << ":" << min << " AM";
        cout << endl;
    }
    else if (daytime == 'P' || daytime=='p' )
    {
        daytime= 'b';
        cout << "Current time = ";
        if(hr<10) cout << "0" << hr;
        else  cout << hr;
        if (min < 10) cout << ":0" << min << " PM";
        else cout << ":" << min << " PM";
        cout << endl;
        
    }
    
    if ((min+wait> 60))
    {
        int  temp  = (min + wait)/60;
        
        
        int temp2 = (min+wait)- temp*60;
      
    
        hr += temp;

        min = temp2;
        
    }else
    {
        min+=wait;
    }
    
    
    
    if (hr<= 12 && daytime == 'a' ) 
    {
        cout <<  "Time after waiting period = "; 
        if(hr<10) cout << "0" << hr;
        else  cout << hr;
        if (min < 10) cout << ":0" << min << " AM";
        else cout << ":" << min << " AM";
        cout << endl;
        
    }
    else if (hr<= 12 && daytime == 'b' )
    {
        cout << "Time after waiting period = ";
        if(hr<10) cout << "0" << hr;
        else  cout << hr;
        if (min < 10) cout << ":0" << min << " PM";
        else cout << ":" << min << " PM";
        cout << endl;
    }
    else if(hr>= 12 && daytime == 'a' )
    {
        hr = hr - 12;
         cout << "Time after waiting period = ";
        if(hr<10) cout << "0" << hr;
        else  cout << hr;
        
        if (min < 10) cout << ":0" << min << " PM";
        else cout << ":" << min << " PM";
        cout << endl;
    }
    else if (hr>= 12 && daytime == 'b')
    {
         hr = hr - 12;
        cout << "Time after waiting period = ";
        if(hr<10) cout << "0" << hr;
        else  cout << hr;
        
        if (min < 10) cout << ":0" << min << " AM";
        else cout << ":" << min << " AM";
        cout << endl;
    }
    
    cout << endl;
 
    
    
    
    
    
    
    cout << "Again:" << endl;
    cin >> re;
    
    if(re == 'N' || re=='n') {
        redo ==false;
        break;
        
    }
    else 
    {
        
        cout << endl;
        redo = true;
    }
   }while(redo); 
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}