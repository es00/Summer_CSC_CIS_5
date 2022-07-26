

/* 
 * File:   main.cpp
 * Author: Elias Silva
 * Purpose: C++ Template To be used in all future Assignments
 *
 * Created on June 23, 2022, 8:28 PM
 */

//System Libraries 
#include <iostream>
#include <stdlib.h> 
#include <cstring>
#include <time.h>
#include <cmath>
#include <iomanip>
#include<fstream>
using namespace std;

//Global Constants


//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

void printMenu()
{
    cout << endl;
    cout << endl;
    cout  << "           ";
    for( int i = 0; i < 100; i++)
        cout << "*";
    cout << endl;
    cout  << "           ";
        cout  << "                        ";
    
     cout << "Elias Roulette Table MENU BETS:" << endl;
     cout << "                 " << "1. Black/Red = 75%" <<  endl;;
     cout << "                 " << "2. ODD = 75%" << endl;
     cout << "                 " << "3. EVEN = 75%" <<  endl;
     cout << "                 " << "4. 1-18 = 75%" << endl;
     cout << "                 " << "5. 19-36 = 75%" << endl;
     cout << "                 " << "6. Number = 3Power" << endl;
    cout  << "           ";
     for( int i = 0; i < 100; i++)
        cout << "*";
};

void Info(float& cash , int& bet)
{
    cout << endl;
     bool validate = false;
    do {
     validate = false;
    cout << "Enter Much cash you want to bet: $";
    cin >> cash;
    if( cash < 0 )
    {
        cout << "Wrong input try again " << endl;
        cout << endl;
        validate = true;
    }
             
    }while(validate);
 
    cout << endl;
    
    do 
    {
          cout  << "Enter the bet you are placing: ";
       cin >> bet;
       cout << endl;
        validate = false;
    
    if( bet < 0 || bet > 6 )
    {
        cout << "Wrong input try again " << endl;
        cout << endl;
        validate = true;
    }
    }while(validate);      
    
}
void spin(int& num, string& color)
{
    srand (time(NULL));
    num = rand() % 36+1;
    
    srand (time(NULL));
    int temp = rand()%2;
    
    if (temp == 1)
        color = "Black";
    else color = "Red";
};
void Display(float cash, string color, int random)
{
    string a = "The Wining number is: ";
   
   string  b  = "The Color is: ";
    
    ofstream rfile("rtext.txt");

    rfile << a;
    rfile << random;
    rfile << endl;
    rfile.close();
    string txt;
    cout << endl;
    
    
    ifstream readfile("rtext.txt");
    
    while(getline(readfile, txt)) cout << txt;
    cout << endl;
    
    readfile.close();
    
    ofstream cfile("ctext.txt");
    cfile << b;
    cfile << color;
    
    cfile.close();
     ifstream creadfile("ctext.txt");
    while(getline(creadfile, txt)) cout << txt;
    cout << endl;
    
    creadfile.close();
    
    
    cout  << fixed <<  setprecision(2);
    
    float temp = cash;
    while(temp > 0)
    {
        cout << "You win :$" << temp  << endl;
        temp*=-1;
    };
    
    float temp2 = cash;
    
    if(temp2 < 0)
    {
        temp2 *= -1;
        
        cout << "You lose :$" << temp2 << endl;    
    };
    
};
float BlkRed(float cash, string color)
{
       char temp; 
       string temp1="a";
       bool validate;
        
       do
    {
     validate = false;
     cout << "What color will you choose Black/Red (B/R)" ;
    cin >> temp;
    temp1= "error";
    
    if(temp == 'B' || temp == 'b')
        temp1 = "Black";
    else if(temp == 'R' || temp == 'r' )
        temp1 = "Red";
    
    if( temp1 == "Black" || temp1 == "Red") 
    {
         if (color == temp1)
            return cash*.75;
        else 
            return -1*cash;
    }else
    {   
        cout <<endl;
        cout << "Wrong input try again " << endl;
        cout << endl;
        validate = true;
    }
    }while(validate);
       
};
float odd(float cash , int num)
{
   if ( num%2 != 0)
        return cash*.75;
    else 
        return -1*cash;
};
float even(float cash, int num)
{
     if ( num%2 == 0)
        return cash*.75;
    else 
        return -1 *cash;
};
float  firstNum(float cash, int num)
{
    if (num < 19 )
        return cash*.75;
    else
        return -1*cash;
};
float  secNum(float cash, int num)
{
    if (num > 19 )
        return cash*.75;
    else
        return -1*cash;
};
float num(float cash, int random)
{   
    int num;
    bool validate;
    do
    {
    cout << "What number do you choose: ";
    cin >> num;
    
    validate = false;
    if(num <1 || num > 36)
    {
        cout <<endl;
        cout << "Wrong input try again " << endl;
        cout << endl;
        validate = true;
    }
    }while(validate);
   
    if(num == random)
        return pow(cash,3);
    else
        return -1*cash;
 
};
bool validate()
{
    char ans;
    bool validate;
    
    do
    {
    validate = false;
    
    cout << endl;
    cout << "Do you want to play again (Y/N) ";
    cin >> ans;
    
    if ( ans == 'Y' || ans =='y' || ans == 'N' || ans == 'n')
    {
        if ( ans == 'Y' || ans == 'y')
            return true;
        else if ( ans == 'N' || ans == 'n')
            return false;
    }else 
    {
        cout << "Wrong input try again" << endl;
        validate = true;
    }
      
    }while(validate);
};
int main(int argc, char** argv) 
{
    
    int  bet, random; // declare variables for the bet and random wining number
    float cash; // cash output
    string color; // color of spin
  
    printMenu(); // display menu
 
    do{ // ask if user wants to play again 
     
    Info(cash,bet); // input amount of cash and bet on menu
    spin(random, color); // calculate the winning color and number
    
    switch(bet) // calculate wining and display wining/loses 
    {
        case 1: cash = BlkRed(cash, color);  // calculate cash wining/loses of color
                break;
        case 2: cash = odd(cash,random); // calculate cash wining/loses of ODD winning number
                break; 
        case 3: cash = even(cash , random);// calculate cash wining/loses of EVEN winning number
                break;
        case 4: cash = firstNum(cash, random);// calculate cash wining/loses of winning number lands between  1 - 18
                break;
        case 5: cash = secNum(cash, random);// calculate cash wining/loses of winning number lands between  18 - 16
                break;
        case 6: cash =num(cash,random); // C// calculate cash wining/loses of winning number is the correct as user inputs
                break;
    }           
    
    Display(cash, color,random);// display wining/loses
    }while(validate());  //ask to redo program
    
    //Exit stage right
    return 0;
}
