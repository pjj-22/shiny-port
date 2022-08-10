// Game.h
#ifndef GAME_H
#define GAME_H

#include "Card.h"
#include <vector> 

class Game {
    private:
    std::vector<Card> deck;
    std::vector<Card> playerHand;
    std::vector<Card> houseHand;
}

#endif