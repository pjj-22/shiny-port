#include <math.h>
#include "Game.h"

void Game::createDeck(int numDecks){
    for (int i = 0; i < numDecks; i++){
        for (int i = 0; i < 52; i++){
            Card nextCard = Card(i / 13, i % 13);
            deck.push_back(nextCard);
        }
    }
    return;
}

void Game::shuffleDeck(){
    return;
}
void Game::deal(){
    return;
}
void Game::dealerMove(){
    return;
}
void Game::playerMove(){
    return;
}