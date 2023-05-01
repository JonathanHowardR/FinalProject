// Jonathan Howard
// COP 3003 - Programming II - CRN 15050

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "game_functions_and_classes.h"
#include <stdlib.h>



using std::cout;
using std::endl;
using std::cin;


int main() {
    std::string input = "";
    game_panel maintain;
    maintain.print_title();
    cin >> input;
    transform(input.begin(), input.end(),
              input.begin(), ::tolower); // case insensitivity
    if(input == "start"){
        maintain.clear_screen();
        cout << "Please enter your characters name: ";
        std::string player_name = "";
        cin >> player_name;
        srand(time(0));
        int player_athletics = std::rand() % 21 + 1;
        int player_strength = std::rand() % 21 + 1;
        character player(player_name,1 ,player_athletics,player_strength);
        cout << player.name << " ,level: " << player.level << " ,athletics:"
        << player.athletics << " ,strength: " << player.strength << "\n";
    }
    else if(input == "exit"){
    }
    else{
        cout << "Would you like to start?";
    }
    maintain.adventure_start();
    start_of_act_I decision;
    maintain.clear_screen();
    decision.first_game_decision();
    ACT_I_Part_2 first_battle;
    maintain.clear_screen();
    first_battle.second_game_decision();
    ACT_I_Part_3 next_decision;
    maintain.clear_screen();
    next_decision.third_game_decision();
    maintain.clear_screen();
    end_game_screen();
}


