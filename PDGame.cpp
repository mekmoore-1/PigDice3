//Mekhi
#include "PDGame.h"

#include <iostream>

// Initializes the game and the turn to this game
PDGame::PDGame()
{
    m_gameOver = false;
    m_gameScore = 0;

    m_myTurn.setParentGame(this);
}

// Return the player current game score
int PDGame::getGameScore() const
{
    return m_gameScore;
}

// Play a turn and adds banked points to the game score
void PDGame::playGame()
{
    m_myTurn.takeTurn();

    m_gameScore += m_myTurn.getScoreThisTurn();
}

// Displays the rules of the game
void PDGame::displayRules()
{
    std::cout << "\nLet's Play PIG Dice!\n";
    std::cout << "* See which player will reach 50 points in the fewest turns.\n";
    std::cout << "* Turn ends when you hold or roll a 1.\n";
    std::cout << "* If you roll a 1, you lose all points for the turn.\n";
    std::cout << "* If you hold, you save all points for the turn.\n\n";
}