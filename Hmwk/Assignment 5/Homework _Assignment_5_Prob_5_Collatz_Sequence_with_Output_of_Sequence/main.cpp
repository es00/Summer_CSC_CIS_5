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

///System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int n)
{
    int count = 2;
    int number = n;
    
    bool t = true;
    
    while(t)
    {
        if(n%2 == 0)
        {
            n = n/2;
        }else
        n = 3*n + 1;
        
        if (n == 1)
        {
            return count;
            break;
        }
        count ++;
    }
    
};
int seq(int n)
{
   
    int number = n;
    
    bool t = true;
    
    while(t)
    {
        if(n%2 == 0)
        {
           return n = n/2;
        }else
        return n = 3*n + 1;
        
    }
};
//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,ns, temp;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    cout << n  << ",";
    temp = n;
    for (int i =0;i < ns; i++)
    {
        temp = seq(temp);
        if (temp == 1) 
        {
           cout << " " << temp;
            break;
        }else
        cout << " " << temp << ",";
    }
    cout << endl;
    //Output data
     cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
        ns<<" steps";
    
    //Exit stage right!
    return 0;
}