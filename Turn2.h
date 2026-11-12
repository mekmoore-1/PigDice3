//Mekhi
#ifndef PIGDICE3_TURN2_H
#define PIGDICE3_TURN2_H

#include "Die.h"

class PDGame;

class Turn
{
private:
    int m_turnCount;
    int m_scoreThisTurn;
    bool m_turnOver;
    char m_choice;
    Die m_myDie;
    PDGame* m_parentGame;

public:
    // Creates a new turn
    Turn();

    // set the turn to its parent game
    void setParentGame(PDGame* parentGame);

    // rolling and holding during a turn
    void takeTurn();

    // Return the scores during this turn
    int getScoreThisTurn() const;

    // Return the number of turns taken
    int getTurnCount() const;

    // Resets the turn status
    void resetTurnOver();

    // Reset the score earned during a turn
    void resetScoreThisTurn();
};




#endif //PIGDICE3_TURN2_H
