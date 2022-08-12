// Game.h
#ifndef GAME_H
#define GAME_H

#include "Card.h"
#include <vector> 

class Game {
    private:
    std::vector<Card> playerHand;
    std::vector<Card> houseHand;
    std::vector<Card> discardPile;
    public:
    std::vector<Card> deck;

    void createDeck(int);
    void shuffleDeck();
    void deal();
    void dealerMove();
    void playerMove();
};

#endif