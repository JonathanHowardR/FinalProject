// Jonathan Howard
// COP 3003 - Programming II - CRN 15050

#include <iostream>
#include "game_functions_and_classes.h"
#include <string>
#include <bits/stdc++.h>
#include <windows.h>

using std::cout;
using std::endl;
using std::cin;

void game_panel::adventure_start() {
    cout << "Enter O to open your eyes" << endl;
    cout << "Enter S to stay asleep" << endl;
    char input = ' ';
    cin >> input;
    cout << "Intro" << endl;
    cout << "Intro" << endl;
    cout << "Intro" << endl;
    cout << "Intro" << endl;
    input = std::toupper(input);
    if (input == 'O') {
        cout << "See scenery" << endl;
    } else if (input == 'S') {
        cout << "Game ends" << endl;
    } else {
        cout << "Either O or S please";

    }
    Sleep(10000);   // pauses screen
}
void game_panel::clear_screen(){ // clears the screen 30 lines
    for(int i = 1; i < 30; i++){
        cout << endl;
    }
}
void game_panel::print_title(){
    cout << "\n"
            "______  _   _ ______    ___       _                     _                     \n"
            "|  _  \\| \\ | ||  _  \\  / _ \\     | |                   | |                    \n"
            "| | | ||  \\| || | | | / /_\\ \\  __| |__   __ ___  _ __  | |_  _   _  _ __  ___ \n"
            "| | | || . ` || | | | |  _  | / _` |\\ \\ / // _ \\| '_ \\ | __|| | | || '__|/ _ \\\n"
            "| |/ / | |\\  || |/ /  | | | || (_| | \\ V /|  __/| | | || |_ | |_| || |  |  __/\n"
            "|___/  \\_| \\_/|___/   \\_| |_/ \\__,_|  \\_/  \\___||_| |_| \\__| \\__,_||_|   \\___|\n"
            "                                                                              \n";
    cout << "Start" << endl;
    cout << "Exit" << endl;
    cout << "Enter Start or Exit: ";
}
void end_game_screen() {
    cout << "End Game Screen" << endl;
    cout << "To Return to game menu type R" << endl;
}

void start_of_act_I::first_game_decision() {
    char input = ' ';
    cout << "Plot" << endl;
    cout << "Plot" << endl;
    cout << "PLot" << endl;
    cout << "Plot" << endl;
    cout << "Enter D to try and open the drawer" << endl;
    cout << "Enter G to go outside" << endl;
    cin >> input;
    input = std::toupper(input);
    if (input == 'D') {
        cout << "Attempt to look in drawer" << endl;
    } else if (input == 'G') {
        cout << "Goes outside" << endl;
    } else {
        cout << "Either D or G please";
    }
    Sleep(10000);
}
void ACT_I_Part_2::second_game_decision() {
    char input = ' ';
    cout << "Plot" << endl;
    cout << "Plot" << endl;
    cout << "PLot" << endl;
    cout << "Plot" << endl;
    cout << "Enter A to prepare for battle" << endl;
    cout << "Enter H to try and hide" << endl;
    cout << "Enter R to run"<< endl;
    cin >> input;
    input = std::toupper(input);
    if (input == 'A') {
        cout << "Roll initiative" << endl;
    } else if (input == 'H') {
        cout << "Roll for hide" << endl;
    } else if (input == 'R') {
        cout << "Roll for run" << endl;
    }else {
        cout << "Either A , H, or R please";
    }
    Sleep(10000);
}

void ACT_I_Part_3::third_game_decision() {
    char input = ' ';
    cout << "Plot" << endl;
    cout << "Plot" << endl;
    cout << "PLot" << endl;
    cout << "Plot" << endl;
    cout << "Enter L to go left" << endl;
    cout << "Enter F to go forward" << endl;
    cout << "Enter R to go right" << endl;
    cout << "Enter B to use bedroll and sleep" << endl;
    cin >> input;
    input = std::toupper(input);
    if (input == 'L') {
        cout << "Continue down the left path" << endl;
    } else if (input == 'F') {
        cout << "Continue moving forward" << endl;
    } else if (input == 'R') {
        cout << "Continue down the right path" << endl;
    }else if (input == 'B') {
        cout << "Continue down the right path" << endl;
    }
    else {
        cout << "Either L , F, R, or B please";
    }
    Sleep(10000);
}