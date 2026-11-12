#include <iostream>
#include "Multiplayer.h"

int main()
{
    int numberOfPlayers;

    // Asking how many people will play
    std::cout << "How many people are playing? ";
    std::cin >> numberOfPlayers;

    // check if there is at least one player
    if (numberOfPlayers < 1)
    {
        std::cout << "You must have at least one player.\n";
        return 0;
    }

    // Moves past the newline after entering the player count
    std::cin.get();

    // Create and start the multiplayer game
    Multiplayer myGame(numberOfPlayers);
    myGame.mpPlayGame();

    return 0;
}


