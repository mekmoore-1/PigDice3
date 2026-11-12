#ifndef PIGDICE3_DIE_H
#define PIGDICE3_DIE_H

#include <random>

class Die
{
private:
    int m_dieValue;
    int m_numOfSides;
    std::mt19937 m_gen;

public:
    // Creates a six-sided die
    Die();

    // Returns the current value of the die
    int getDieValue() const;

    // Rolls the die and generates a random number
    void rollDie();
};

#endif //PIGDICE3_DIE_H

