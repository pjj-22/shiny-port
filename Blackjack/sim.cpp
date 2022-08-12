#include <iostream>
#include <vector>
#include "Card.h"
#include "Game.h"

int main() {
    Game game = Game();
    game.createDeck(2);
    for (Card card : game.deck) {
        card.printCard();
    }

    return 0;
}