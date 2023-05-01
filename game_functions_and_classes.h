// Jonathan Howard
// COP 3003 - Programming II - CRN 15050

#ifndef PROJECT_PROG2_2ND_GAME_FUNCTIONS_AND_CLASSES_H
#define PROJECT_PROG2_2ND_GAME_FUNCTIONS_AND_CLASSES_H
#include<iostream>
#include<array>
#include<string>
#include<bits/stdc++.h>
#include <windows.h>


using std::cout;
using std::endl;
using std::cin;


class game_panel{
public:
    void adventure_start();
    void clear_screen();
    void print_title();
};

class character{
public:
    std::string name;
    int level;
    int athletics;
    int strength;
    character(std::string name, int level, int athletics, int strength){
        this->name = name;
        this->level = level;
        this->athletics = athletics;
        this->strength = strength;
    };
};

class enemies{
public:
    std::string name;
    int level;
    int athletics;
    int strength;
    enemies(std::string name, int level, int athletics, int strength){
        this->name = name;
        this->level = level;
        this->athletics = athletics;
        this->strength = strength;
    };
};

class start_of_act_I{
public:
    void first_game_decision();
};

class ACT_I_Part_2{
public:
    void second_game_decision();
};

class ACT_I_Part_3{
public:
    void third_game_decision();
};
void end_game_screen();

#endif //PROJECT_PROG2_2ND_GAME_FUNCTIONS_AND_CLASSES_H
