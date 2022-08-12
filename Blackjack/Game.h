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
    std::vector<Card> discardPile;
    public:
    void createDeck(int);
    void shuffleDeck(vector<Card>, int);
    void deal();
    void dealerMove();
    void playerMove();
}

#endif