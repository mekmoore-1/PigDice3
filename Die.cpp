//Mekhi
#include "Die.h"

//  six side die and initializes the random generator
Die::Die()
{
    m_dieValue = 1;
    m_numOfSides = 6;
    std::random_device rd;
    m_gen.seed(rd());
}

// Returns the value of the die
int Die::getDieValue() const
{
    return m_dieValue;
}

// Generates a number between 1 and 6
void Die::rollDie()
{
    std::uniform_int_distribution<int> distribution(1, m_numOfSides);
    m_dieValue = distribution(m_gen);
}