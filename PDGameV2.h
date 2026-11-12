//Mekhi
#ifndef PIGDICE3_PDGAMEV2_H
#define PIGDICE3_PDGAMEV2_H

#include "PDGame.h"
#include <string>

class PDGameV2 : public PDGame
{
private:
    std::string m_playerName;

public:
    // Create a player and assigns their name
    PDGameV2(std::string playerName);

    // Returns the players name
    std::string getPlayerName() const;

    // Plays one turn for this player
    void playGame();

    // Displays the Pig Dice rules
    void displayRules();
};



#endif //PIGDICE3_PDGAMEV2_H
