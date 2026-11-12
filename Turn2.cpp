//Mekhi
#include "Turn2.h"
#include <iostream>

// Initializes the turn variables
Turn::Turn()
{
    m_turnCount = 0;
    m_scoreThisTurn = 0;
    m_turnOver = false;
    m_choice = 'r';
    m_parentGame = nullptr;
}

// sets this turn to its parent game
void Turn::setParentGame(PDGame* parentGame)
{
    m_parentGame = parentGame;
}

// the players decision to roll or hold
void Turn::takeTurn()
{
    m_turnCount++;
    m_scoreThisTurn = 0;
    m_turnOver = false;

    while (!m_turnOver)
    {
        std::cout << "roll or hold? (r/h): ";
        std::cin >> m_choice;

        if (m_choice == 'r')
        {
            m_myDie.rollDie();

            std::cout << "Die: " << m_myDie.getDieValue();

            if (m_myDie.getDieValue() == 1)
            {
                m_scoreThisTurn = 0;
                m_turnOver = true;

                std::cout << "\nTurn over. No score.\n";
            }
            else
            {
                m_scoreThisTurn += m_myDie.getDieValue();

                std::cout << " - Running score this turn: "
                          << m_scoreThisTurn << "\n";
            }
        }
        else if (m_choice == 'h')
        {
            m_turnOver = true;
        }
        else
        {
            std::cout << "Please enter r or h.\n";
        }
    }

    std::cout << "Score Banked This Turn: "
              << m_scoreThisTurn << "\n";
}

// Return the score earned during the current turn
int Turn::getScoreThisTurn() const
{
    return m_scoreThisTurn;
}

// Return the total number of turns taken
int Turn::getTurnCount() const
{
    return m_turnCount;
}

// Reset the turn
void Turn::resetTurnOver()
{
    m_turnOver = false;
}

// Reset the current turn score
void Turn::resetScoreThisTurn()
{
    m_scoreThisTurn = 0;
}