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
#include<cstring>
#include <iomanip>
using namespace std;

//Global Constants
const float SERIESONE = .1, SERIESTWO = .08, SERIESTHREE = .06, SERIESFOUR= .04, MONTH = 10, BELOW =15; 
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Initialize range Random Number Seed
     string  nOne, nTwo, nThree;
     int input;
     float balance, check , checkFee, newBalance , lowFee;
     
     
    string nameO, nameT, nameTH;
    int timeRunOne, timeRunTwo, timeRunThree ;
    
    char iput;
    int hr;
    double pacA = 9.95, pacB=14.95, pacC = 19.95;
    
     char playerOne, playerTwo;
     
    int inputOne, temp;
    char n1000s,n100s,n10s,n1s;
    
    string inputOnE, inputTwo;
    
     int choose;
    //Declare Variables
    //Initialize Variables
     do
     {
        cout<<"Choose from the following Menu Items"<<endl;
        cout << endl;
        cout<<"Problem 1 Gladdis 9th Edition Chapter 4 Problem 8 Sort Names"<<endl;
        cout<<"Problem 2 Gladdis 9th Edition Chapter 4 Problem 11 Books"<<endl;
        cout<<"Problem 3 Gladdis 9th Edition Chapter 4 Problem 12 Bank Charges"<<endl;
        cout<<"Problem 4 Gladdis 9th Edition Chapter 4 Problem 14 Race"<<endl;
        cout<<"Problem 5 Gladdis 9th Edition Chapter 4 Problem 23 ISP"<<endl;
        cout<<"Problem 6 Savitch 9th Edition Chapter 3 Problem 1 Rock Paper Scissors"<<endl;
        cout<<"Problem 7 Savitch 9th Edition Chapter 3 Problem 3 Roman Conversion"<<endl;
        cout<<"Problem 8 Savitch 9th Edition Chapter 3 Problem 4 Rock Compatible Signs"<<endl;
        
        cin>>choose;
        
        if (choose < 0 || choose > 8)
        {
            cout << "Wrong input, Run program again" << endl;
            exit(1);
        }
     
        switch(choose)
        {
            case 1:
                cout << "Sorting Names" << endl;
                cout << "Input 3 names" << endl;
                cin>> nOne >> nTwo >> nThree;
                cout << endl;
                
                 if (nOne < nTwo && nOne < nThree)
                 {
                     cout << nOne << endl;
                     if (nTwo < nThree)
                     {
                         cout << nTwo << endl;
                         cout << nThree;
                     }
                     else 
                     {
                         cout << nThree << endl;
                         cout << nTwo;
                     }
                 } else  if (nTwo < nOne && nTwo < nThree)
                   {
                        cout << nTwo << endl;
                        if (nOne < nThree)
                        {
                            cout << nOne << endl;
                            cout << nThree;
                        }
                        else 
                        {
                            cout << nThree << endl;
                            cout << nOne;
                        }
                }else if (nThree < nOne && nThree < nTwo)
                 {
                        cout << nThree << endl;
                        if (nOne < nTwo)
                        {
                            cout << nOne << endl;
                            cout << nTwo;
                        }
                        else 
                        {
                            cout << nTwo << endl;
                            cout << nOne;
                        }
                }
                cout << endl;
                 break;
           
            case 2:
                 cout << "Book Worm Points" << endl;
                 cout << "Input the number of books purchased this month." << endl;
                 cin >> input;

    
    
    
               if(input == 0)
                    {
        cout << "Books purchased =" << setw(3) << input << endl;
        cout <<"Points earned   =" << input;
    }
                else if(input == 1)
                    {
        cout << "Books purchased =" << setw(3) << input << endl;
        cout <<"Points earned   =" << setw(3) << 5;
    }
                 else if(input == 2)
                     {
        cout << "Books purchased =" << setw(3) << input << endl;
        cout <<"Points earned   =" << setw(3) << 15;
    }  
                 else if(input == 3)
                    {
        cout << "Books purchased =" << setw(3) << input << endl;
        cout <<"Points earned   =" << setw(3) << 30;
    }
                else if(input >= 4 )
                    {
        cout << "Books purchased =" << setw(3) << input << endl;
        cout <<"Points earned   =" << setw(3) << 60;
    }
                 
                 cout << endl;
                  break;
            
            case 3:
                cout << "Monthly Bank Fees" << endl;
    
                cout << "Input Current Bank Balance and Number of Checks" << endl;
    
                 cin >> balance >> check;
    
                if (check < 20)
                 {
        checkFee = check*SERIESONE;
    }else if( check >= 20 && check <= 39)
                 {
        checkFee = check*SERIESTWO;
    }else if( check >= 40 && check <= 59)
                 {
        checkFee = check*SERIESTHREE;
    }else if( check >=60)
                 {
        checkFee = check*SERIESFOUR;
    }
    
                   if ( balance < 400)
                      {
        lowFee =BELOW;
        newBalance = balance - checkFee - MONTH - BELOW;
    }else
                      {
        lowFee=0;
        newBalance = balance - checkFee - MONTH;
    }
    
    
    
                  cout << fixed << setprecision(2);
                  cout << "Balance     $" << setw(9) << balance << endl;
                  cout << "Check Fee   $" << setw(9) << checkFee << endl;
                  cout << "Monthly Fee $" << setw(9) << MONTH << endl;
                  cout << "Low Balance $" << setw(9) << lowFee << endl;
                  cout << "New Balance $" << setw(9) << newBalance;
                  
                  cout << endl;
                  break;
            case 4:
                  cout <<"Race Ranking Program" << endl;
                  cout << "Input 3 Runners" << endl;
                  cout << "Their names, then their times" << endl;
                  cin >> nameO >> timeRunOne;
                  cin >> nameT >>  timeRunTwo;
                  cin >> nameTH >> timeRunThree;
    
    
    
    //Map inputs -> outputs
                  if(timeRunOne < timeRunTwo && timeRunOne < timeRunThree)
                   {
        cout << nameO << "\t" << setw(3) << timeRunOne << endl;
        if( timeRunTwo < timeRunThree)
        {
            cout << nameT << "\t" << setw(3) << timeRunTwo << endl;
            cout << nameTH << "\t" << setw(3) << timeRunThree;
        
        }
        else
        {
            cout << nameTH << "\t" << setw(3) << timeRunThree<< endl;
            cout << nameT << "\t" << setw(3) << timeRunTwo;
        }
    }
                     else if (timeRunTwo < timeRunOne && timeRunTwo < timeRunThree)
                     {
        cout << nameT << "\t" << setw(3) << timeRunTwo << endl;
        if( timeRunOne < timeRunThree)
        {
            cout << nameO << "\t" << setw(3) << timeRunOne << endl;
            cout << nameTH << "\t" << setw(3) << timeRunThree;
        
        }
        else
        {
            cout << nameTH << "\t" << setw(3) << timeRunThree<< endl;
            cout << nameO << "\t" << setw(3) << timeRunOne;
        }
    }
                    if (timeRunThree < timeRunOne && timeRunThree < timeRunTwo)
                    {
        cout << nameTH << "\t" << setw(3) << timeRunThree << endl;
        if( timeRunOne < timeRunTwo)
        {
            cout << nameO << "\t" << setw(3) << timeRunOne << endl;
            cout << nameT << "\t" << setw(3) << timeRunTwo;
        
        }
        else
        {
            cout << nameT << "\t" << setw(3) << timeRunTwo<< endl;
            cout << nameO << "\t" << setw(3) << timeRunOne;
        }
    }
                  cout << endl;
                  break;
            case 5:
                 cout << "ISP Bill" << endl;
                 cout << "Input Package and Hours" << endl;
                 cin >> iput;
                 cin >> hr;
    
                 cout << fixed << setprecision(2);
    //Map inputs -> outputs
                 if(iput == 'A' or iput == 'a')
                {
        if( hr > 10)
            pacA = 9.95 + ((hr - 10 )*2);
        
     
        cout << "Bill = $ " << setw(4) << pacA;
    }
                else if(iput == 'B' or iput == 'b')
                {
        if(hr > 20)
            pacB +=(hr-20)*1;

       cout << "Bill = $ " << setw(4) << pacB;
    }
                else if(iput == 'C' or iput == 'c')
                 {
       cout << "Bill = $ " << setw(4) << pacC;
    }
                 cout << endl;
                 break;
            case 6:
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
                
                cout << endl;
                break;
            case 7:
                 cout << "Arabic to Roman numeral conversion." << endl;
                 cout << "Input the integer to convert." << endl;
                 cin >> inputOne;
    
                temp = inputOne;
    
    //Map inputs -> outputs
                n1000s=inputOne/1000;
                inputOne-=n1000s*1000;
                n100s=inputOne/100;
                inputOne-=n100s*100;
                n10s=inputOne/10;
                inputOne-=n10s*10;
                n1s=inputOne;
    
                if (temp < 1000 || temp > 3000)
                {
                    cout << temp  << " is Out of Range!";
                    exit(1);
                }


                cout << temp << " is equal to ";

                    switch(n1000s)
                    {
                        case 3: cout << "M";
                        case 2: cout << "M";
                        case 1: cout << "M";
                    }

                    switch(n100s)
                    {
                        case 9: cout << "CM"; break;
                        case 8: cout << "DCCC"; break;
                        case 7: cout << "DCC"; break;
                        case 6: cout << "DC"; break;
                        case 5: cout << "D"; break;
                        case 4: cout << "CD"; break;
                        case 3: cout << "C"; 
                        case 2: cout << "C"; 
                        case 1: cout << "C"; 
                    }
                    switch(n10s)
                    {
                        case 9: cout << "XC"; break;
                        case 8: cout << "LXXX"; break;
                        case 7: cout << "LXX"; break;
                        case 6: cout << "LX"; break;
                        case 5: cout << "L"; break;
                        case 4: cout << "XL"; break;
                        case 3: cout << "X"; 
                        case 2: cout << "X"; 
                        case 1: cout << "X"; 
                    }
                    switch(n1s)
                    {
                        case 9: cout << "IX"; break;
                        case 8: cout << "VIII"; break;
                        case 7: cout << "VII"; break;
                        case 6: cout << "VI"; break;
                        case 5: cout << "V"; break;
                        case 4: cout << "IV"; break;
                        case 3: cout << "I"; 
                        case 2: cout << "I"; 
                        case 1: cout << "I"; 
                    }
                    
                    cout << endl;
                    break;
            case 8:
             //Initialize or input i.e. set variable values
                    cout << "Horoscope Program which examines compatible signs." << endl;   

                    cout  << "Input 2 signs."<< endl;
                    cin >> inputOnE >> inputTwo;
                    //Map inputs -> outputs
                    if(inputOnE == "Taurus" or inputOnE == "Virgo" or inputOnE == "Capricorn")
                    {
                        if(inputTwo == "Taurus" or inputTwo == "Virgo" or inputTwo == "Capricorn")
                            cout << inputOnE << " and " << inputTwo << " are compatible Earth signs."; 
                        else
                            cout << inputOnE << " and " << inputTwo << " are not compatible signs.";
                    }else if(inputOnE == "Aries" or inputOnE == "Leo" or inputOnE == "Sagittarius")
                    {
                        if(inputOnE == "Aries" or inputOnE == "Leo" or inputOnE == "Sagittarius")
                            cout << inputOnE << " and " << inputTwo << " are compatible Fire signs."; 
                        else
                            cout << inputOnE << " and " << inputTwo << " are not compatible signs.";
                    }else if(inputOnE == "Aries" or inputOnE == "Libra" or inputOnE == "Aquarius")
                    {
                        if(inputOnE == "Aries" or inputOnE == "Libra" or inputOnE == "Aquarius")
                            cout << inputOnE << " and " << inputTwo << " are compatible Air signs."; 
                        else
                            cout << inputOnE << " and " << inputTwo << " are not compatible signs.";
                    }else if(inputOnE == "Cancer" or inputOnE == "Scorpio" or inputOnE == "Pisces")
                    {
                        if(inputOnE == "Cancer" or inputOnE == "Scorpio" or inputOnE == "Pisces")
                            cout << inputOnE << " and " << inputTwo << " are compatible Water signs."; 
                        else
                            cout << inputOnE << " and " << inputTwo << " are not compatible signs.";
                    }
                  cout << endl;
                  break;
      }
     
     
     }while(choose >=0 &&  choose<9);
    
    //Map inputs to outputs -> The process
    
    //Display Results
  
    
    //Exit stage right
    return 0;
}

