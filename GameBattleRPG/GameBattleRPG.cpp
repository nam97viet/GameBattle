// GameBattleRPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Character.h"
#include "Wizard.h"
#include "Knight.h"
#include <iostream>





int main()
{
    /* MENU
    string start, userName;
    int userJob;
    cout << "==========WELCOME TO GOBLIN SLAYER==========" << endl;
    cout << "Press \"start\" to play and \"exit\" to exit game." << endl;
    cin >> start;
    if (start == "exit")
    {
        return 0;
    }
    else
    {
        cout << "Please enter your character name:" << endl;
        getline(cin, userName);
        cout << "Please choose the number for your character's class:" << endl;
        cout << " 1 Knight   2 Wizard   3 Babarian   4 Rogue" << endl;
        cin >> userJob;
    }
    */







    
    Knight nhanvat("Nam", "Knight", 1, 0, 4, 4, 110, 110);
    nhanvat.printInfo();
    cout << endl;

    nhanvat.UpdateStats();
    nhanvat.printInfo();
    return 0;
}
