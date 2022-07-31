

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
#include <vector>
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

void Info(string name[],float cash[] , int bet[], int& players)
{
    cout << endl;
     bool validate = false;
   
    
      do{ 
          
      validate = false;
     cout << "How many players are playing up to 5: ";
     cin >> players;
      if( players < 0 || players > 5 )
      {
        cout << "Wrong input try again " << endl;
        cout << endl;
        validate = true;
    }
     cout << endl;
    }while(validate);
     
     cout << "What are the names of the player(s)" <<  endl;
     
     for (  static int i = 0 ; i < players; i++)
     {
         cin >> name[i];
     }
     
     cout << endl;
    cout << "Enter Much cash you want to bet: $" << endl;
    
    for (int i = 0; i < players; i++)
    {
    do{  
        validate = false;
       cout <<  name[i] << ":$";
    cin >> cash[i];
    if( cash[i] < 0 )
    {
        cout << "Wrong input try again " << endl;
        cout << endl;
        validate = true;
    }
             
    }while(validate);
    
   
   
    }     
    
    do 
    {
        for ( int i = 0 ; i < players; i++)
        {
            cout  << name[i] << " ";
          cout  << "enter the bet you are placing: ";
       cin >> bet[i];
      
        validate = false;
    
    if( bet[i] < 0 || bet[i] > 6 )
    {
        cout << "Wrong input try again " << endl;
        cout << endl;
        validate = true;
    }}
    }while(validate);      
    cout << endl;
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
void Display(string name,float cash, string color, int random)
{
    cout << " " << name << " ";
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
    cout <<  endl;
};
void dataWin (vector<int> a[],int cash, int n)
{
    a[n].push_back(cash);
}
float BlkRed(float cash, string color, string temp1 = "a")
{
       char temp; 
      
       bool validate;
       cout << endl;
       do
    {
     validate = false;
     cout << "What color will you choose Black/Red (B/R)" ;
    cin >> temp;
    
    
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
    cout << endl;
    
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
bool validate(int &round)
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
        {
            return true;
            round++;
        }
        else if ( ans == 'N' || ans == 'n')
            return false;
    }else 
    {
        cout << "Wrong input try again" << endl;
        validate = true;
    }
      
    }while(validate);
};
void cashSort(float a[],float cash[],int player )
{
    for(int i = 0;i <player;i++)
        a[i]=cash[i];
    
    int temp;
    float temp2;
    for(int i=0; i<player; i++)
    {
        
        temp=i;

        // run an inner loop j for selection sort from i+1 to N
        for(int j=i+1; j<player; j++)
        {
            // now check if the value at num[j] is smaller than value at num[snp]
            if(a[j]< a[temp])
            {
                // if the value is smaller, then store the value of j to snp
                temp=j;
            }
        }

        // outside the body of inner loop j check if num[i]>num[snp]. If yes then swap the numbers
        if(a[i] > a[temp])
        {
            temp2 = a[i];
            a[i] = a[temp];
            a[temp] = temp2;
        }
    }
    
};
void NameSort(string players[],int player )
{
   int i, j;
   if( player> 1)
   {
    for (i = 0; i < player - 1; i++)
  
        // Last i elements are already 
        // in place
        for (j = 0; j < player - i - 1; j++)
            if (players[j] > players[j + 1])
                swap(players[j], players[j + 1]);   
   }    
};
void ALLDisplay(string player[], int totalCash,float a[], int numPlyer)
{
    cout << endl;
    cout << "PLayers playing the game sorted:" << endl;
    for (int i=0;i < numPlyer; i++)
        cout << player[i] << endl;
    cout << endl;
    cout << "Wining or loses sorted:" << endl;
            
           
    for(int i = 0;i < numPlyer; i++)
        cout << a[i]  << " ";
    
    cout << endl;
    cout << endl;
    
    if ( totalCash > 0)
        cout << "You guys win $" << totalCash << endl;
    else
        cout << "You guys lose $" << totalCash << endl;
    
    
    
}
void search(string ar[], string sea, int n)
{
    
    cout << endl;
    for (int i = 0; i < n; i++)
        if (ar[i] == sea)
            cout << "Name " << ar[i] << " found:" << endl;
        
            
    

};
int main(int argc, char** argv) 
{
    int MAX = 5;
    int  bet[MAX], random, numPlayer, totalCash = 0; // declare variables for the bet and random wining number
    float cash[MAX] , sortcash[MAX]; // cash output
    string color, namesearch; // color of spin
    float playerMoney[MAX];
    string players[MAX];
    printMenu(); // display menu
    vector<int> scoreboard[MAX];
    float totalDisplay[MAX][MAX];
    int round = 0;
    bool check;
    int countgames=0;
    do{ // ask if user wants to play again 
     
    Info(players,playerMoney,bet, numPlayer); // input amount of cash and bet on menu
   
    spin(random, color); // calculate the winning color and number
    cout << endl;
    int tempa = 0;
    
    for(int i= 0; i < numPlayer; i++)
    {
        cout << bet[i];
    switch(bet[i]) // calculate wining and display wining/loses 
    {
        case 1: cash[i] = BlkRed(playerMoney[i], color);
                Display(players[i],cash[i], color,random);
                totalCash+=cash[i];// calculate cash wining/loses of color         
            break;
        case 2: cash[i] = odd(playerMoney[i],random); // calculate cash wining/loses of ODD winning number
                Display(players[i],cash[i], color,random);
                totalCash+=cash[i];
                break; 
        case 3: cash[i] = even(playerMoney[i] , random);// calculate cash wining/loses of EVEN winning number
                Display(players[i],cash[i], color,random);
                totalCash+=cash[i];
                break;
        case 4: cash[i] = firstNum(playerMoney[i], random);// calculate cash wining/loses of winning number lands between  1 - 18
               Display(players[i],cash[i], color,random);
               totalCash+=cash[i];
                break;
        case 5: cash[i] = secNum(playerMoney[i], random);// calculate cash wining/loses of winning number lands between  18 - 16
               Display(players[i],cash[i], color,random);
              totalCash+=cash[i];
                break;
        case 6: cash[i] =num(playerMoney[i],random); // C// calculate cash wining/loses of winning number is the correct as user inputs
                Display(players[i],cash[i], color,random);
               totalCash+=cash[i]; 
                break;
        default:
            cout << "Error" << endl;
            exit(0);
            
    }   
    
           
    }
    
     // display wining/loses

     NameSort(players, numPlayer);
     cashSort(sortcash,cash, numPlayer );
    
     
    ALLDisplay(players,totalCash,sortcash, numPlayer); 
      
    
      dataWin(scoreboard,totalCash, countgames);
      countgames++;
      
      cout << "Search player name: " << endl;
      cin >> namesearch;
      
      search(players, namesearch, numPlayer);
      
      check = validate(round);
    }while(check);  //ask to redo program
    
    
    //Exit stage right
    return 0;
}
