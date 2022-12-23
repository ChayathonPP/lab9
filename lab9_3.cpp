/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
#include<string>
using namespace std;
int main()
{ 
     int y,h,b;
     cout << "Enter your age: ";
     cin >> y;
     string character;
     if(y <= 25)
     {
        cout << "Enter your height: ";
        cin >> h;
        if(h<100)
        
        character = "Chopper";
        else if (h<180)
        character = "Usopp";
        else
        {
        cout << "Enter your bounty: ";    
        cin >> b;
        if(b <= 1100000000)
        character = "Sanji";
        else
        character = "Zoro";
        }
     }
     else if (y <= 60)
     {
        cout << "Enter your bounty: ";
        cin >> b;
        if(b>500000000)
        character = "Jinbe";
        else
        character = "Franky";
     }
     else
     character = "Brook";

     cout << "Your character = " << character;
     return 0;
     }
    
    
    
    

    

