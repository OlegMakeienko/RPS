//
// Created by OlegMakeienko on 2024-09-15.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <string>

#include "RockPaperScissors.h"

using namespace std;

class Player {
private:
    string name;
    RockPaperScissors choice;

public:
    void makeChoice();
    int getChoice();
};



#endif //PLAYER_H
