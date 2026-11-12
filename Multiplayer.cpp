//Mekhi
#include "Multiplayer.h"

#include <iostream>
#include <string>

// Creates the players and asks each person for their name.
Multiplayer::Multiplayer(int numberOfPlayers)
{
    m_gameOver = false;

    std::string playerName;

    for (int i = 0; i < numberOfPlayers; i++)
    {
        std::cout << "Enter player " << i + 1 << "'s name: ";
        std::getline(std::cin, playerName);

        // Gives a default name if the player does not enter one.
        if (playerName == "")
        {
            playerName = "Anonymous Player " + std::to_string(i + 1);
        }

        // Adds the player to the multiplayer vector.
        m_players.push_back(PDGameV2(playerName));
    }
}

// Runs the game until a player reaches 50 points.
void Multiplayer::mpPlayGame()
{
    m_players.at(0).displayRules();

    while (!m_gameOver)
    {
        for (int i = 0; i < m_players.size(); i++)
        {
            // Allows the current player to take their turn.
            m_players.at(i).playGame();

            // Displays everyone's scores after each turn.
            displayScoreBoard();

            // Checks whether someone has won.
            checkForWinner();

            if (m_gameOver)
            {
                break;
            }
        }
    }
}

// Checks each player's score to see if someone has won.
void Multiplayer::checkForWinner()
{
    for (int i = 0; i < m_players.size(); i++)
    {
        if (m_players.at(i).getGameScore() >= 50)
        {
            std::cout << "\nCongratulations! "
                      << m_players.at(i).getPlayerName()
                      << " you win with a score of "
                      << m_players.at(i).getGameScore()
                      << ".\n";

            m_gameOver = true;
            break;
        }
    }
}

// Displays the current score for every player.
void Multiplayer::displayScoreBoard()
{
    std::cout << "\n";

    for (int i = 0; i < m_players.size(); i++)
    {
        std::cout << m_players.at(i).getPlayerName()
                  << " (Score:"
                  << m_players.at(i).getGameScore()
                  << ") | ";
    }

    std::cout << "\n";
}