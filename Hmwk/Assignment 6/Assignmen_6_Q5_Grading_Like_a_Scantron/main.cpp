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
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(char arr[])
{
    cout << "C/W     ";
       for( int i = 0; i < 20; i++)
    {
       
      
        cout << arr[i] << " ";
        
    }
    cout << endl;
    
};
void read(char arr[], string& an)
{

    cin >> an;
     for( int i = 0; i < 20; i++)
    {
       
      
        cin >> arr[i];
    }
    
};
int  compare(char arr[], char arr2[], char arr3[])
{
    int correct= 0;
    
    for ( int i = 0 ; i< 20 ; i++)
    {
        if(arr[i] ==arr2[i] )
        {
            arr3[i] = 'C';
            correct += 1;
        }
        else 
            arr3[i] = 'W';
    }
    return correct;
};

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string key,answers,score;
    char fileKey[20],fileAns[20] , correct[20];
    
    float pRight;
    
    //Initialize or input i.e. set variable values
    
    

   read(fileKey,key);
   read(fileAns,answers);
    
  
     
    //Score the exam
    pRight=compare(fileKey,fileAns,correct);
    
    //Display the outputs

  
    print(correct);
    cout<<"Percentage Correct = "<<pRight/20*100<<"%"<<endl;
    
    

    //Exit stage right or left!
    return 0;
}