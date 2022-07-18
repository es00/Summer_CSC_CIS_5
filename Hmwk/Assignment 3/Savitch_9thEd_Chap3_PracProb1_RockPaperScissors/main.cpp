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
    char playerOne, playerTwo;
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    cin >> playerOne;
    cin >> playerTwo;
    
    //Map inputs -> outputs
    if(playerOne == 'R' or playerOne == 'r')
    {   
        if(playerTwo == 'P' or playerTwo == 'p')
             cout << "Paper covers rock.";
        else 
           cout << "Rock breaks scissors.";
    }else if(playerOne == 'S' or playerOne == 's')
    {   
        if(playerTwo == 'P' or playerTwo == 'p')
        cout << "Scissors cuts paper.";
        else 
            cout << "Rocks breaks scissors.";
    }else if (playerOne == 'P' or playerOne == 'p')
    {   
        if(playerTwo == 'R' or playerTwo == 'r')
        cout << "Paper covers rock.";
        else 
            cout << "Scissors cuts paper.";
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}