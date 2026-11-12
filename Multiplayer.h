//Mekhi
#ifndef PIGDICE3_MULTIPLAYER_H
#define PIGDICE3_MULTIPLAYER_H

#include "PDGameV2.h"
#include <vector>

class Multiplayer
{
private:
    std::vector<PDGameV2> m_players;
    bool m_gameOver;

    // Check if a player has reached 50 points
    void checkForWinner();

    // Displays current score board
    void displayScoreBoard();

public:
    // Creates the multiplayer game and add the players
    Multiplayer(int numberOfPlayers);

    // Runs the multiplayer game.
    void mpPlayGame();
};


#endif //PIGDICE3_MULTIPLAYER_H
