//Mekhi
#include "PDGameV2.h"

#include <iostream>

// Created a player and to store their name
PDGameV2::PDGameV2(std::string playerName)
{
    m_playerName = playerName;
}

// Returns the players name
std::string PDGameV2::getPlayerName() const
{
    return m_playerName;
}

// Displays the player name and starts
void PDGameV2::playGame()
{
    std::cout << "\n" << m_playerName
              << " (Score:" << getGameScore() << ")"
              << " - TURN " << m_myTurn.getTurnCount() + 1 << " ";

    // Reuses the original PDGame turn
    PDGame::playGame();
}

// Displays the original Pig Dice rules.
void PDGameV2::displayRules()
{
    PDGame::displayRules();
}