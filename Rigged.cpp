#include "Rigged.h"
#include <iostream>
#include <vector>
#include <string>

void Rigged::enterName(std::string lotteryEntrant)
{
    lotteryEntrants.push_back(lotteryEntrant);
}

std::string Rigged::winner()
{
        std::string winner;
        winner = lotteryEntrants.back();
        return winner;
}
