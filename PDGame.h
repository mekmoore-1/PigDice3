//Mekhi
#ifndef PIGDICE3_PDGAME_H
#define PIGDICE3_PDGAME_H

#include "Turn2.h"

class PDGame
{
protected:
    Turn m_myTurn;
    bool m_gameOver;
    int m_gameScore;

    // Plays game
    void playGame();

    // Displays the rules of Pig Dice
    void displayRules();

public:
    // Created a new Pig Dice game
    PDGame();

    // Returns the players game score
    int getGameScore() const;
};




#endif //PIGDICE3_PDGAME_H
