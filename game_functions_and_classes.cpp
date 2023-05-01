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
    input = std::toupper(input);
    if (input == 'O') {
    } else if (input == 'S') {
        cout << "Game over" << endl;
        end_game_screen();
    } else {
        cout << "Either O or S please";

    }
    Sleep(5000);   // pauses screen
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
    char entry = ' ';
    srand(time(0));
    cout << "You open your eyes to blue skylight pouring in from the window to your right." << endl;
    cout << "You smell a faint cent of rotten food, that is in the corner of the room." << endl;
    cout << "You stand up and see that the little hut you are in has only a drawer and the front door." << endl;
    cout << "Would you like to go out the door or open the drawer?" << endl;
    cout << "Enter D to try and open the drawer" << endl;
    cout << "Enter G to go outside" << endl;
    cin >> input;
    input = std::toupper(input);
    if (input == 'D') {
        cout << "Its locked would you like to pry it open?" << endl;
        cout << "Enter D again to open" << endl;
        cout << "Enter N give up" << endl;
        cin >> entry;
        if (entry == 'D'){
            int roll = std::rand() % 21 + 1;
            cout << roll << endl;
            if (roll >= 12){
                cout << "The drawer opens sadly it was for nothing because its empty." << endl;
            }
            else{
                cout << "You failed and broke the handle making it impossible to open." << endl;
            }
        }
    } else if (input == 'G') {
        cout << "Goes outside" << endl;
    } else {
        cout << "Either D or G please";
    }
    Sleep(10000);
}
void ACT_I_Part_2::second_game_decision() {
    char input = ' ';
    srand(time(0));
    cout << "You end up opening the door and going outside." << endl;
    cout << "To your surprise there is an ogre right in front of you seeming just as surprised as you." << endl;
    cout << "He grabs his club as if he sees you as a threat, to show he is ready to fight." << endl;
    cout << "Enter A to prepare for battle" << endl;
    cout << "Enter H to try and hide" << endl;
    cout << "Enter R to run"<< endl;
    cin >> input;
    input = std::toupper(input);
    if (input == 'A') {
        int roll = std::rand() % 21 + 1;
        cout << "Roll initiative" << endl;
    } else if (input == 'H') {
        cout << "Roll for hide" << endl;
        int roll = std::rand() % 21 + 1;
        cout << roll;
        if( roll >= 16){
            cout << "You hid successfully and the ogre was unable to see you so it decided he must have been seeing things." << endl;
        }
        else{
            cout << "You failed and now the ogre is attacking you because you scared it." << endl;
        }
    } else if (input == 'R') {
        cout << "Roll for run" << endl;
        int roll = std::rand() % 21 + 1;
        cout << roll;
        if(roll >= 15){
            cout << "You were able to run away and escape the slow ogre." << endl;
        }
        else{
            cout << "While you were trying to run you tripped over a branch and the ogre swings at you." << endl;
        }
    }else {
        cout << "Either A , H, or R please";
    }
    Sleep(10000);
}

void ACT_I_Part_3::third_game_decision() {
    char input = ' ';
    cout << "You successfully beat the ogre and now you have come to a fork in the road." << endl;
    cout << "One sign reads go left to the city of sunderdale." << endl;
    cout << "Another reads go forward to to einuns doom." << endl;
    cout << "The last one reads go right to the forest of wales." << endl;
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

void roll(){
    srand(time(0));
    int roll = std::rand() % 21 + 1;
}