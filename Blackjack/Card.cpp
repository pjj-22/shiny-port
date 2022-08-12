#include <iostream>
#include "Card.h"

Card::Card(int suit, int value){
    this->suit = suit;
    this->value = value;
}

void Card::printCard() {

    switch (this->value) {
        case 0:
            std::cout << "Ace";
            break;
        case 10:
            std::cout << "Jack";
            break;
        case 11:
            std::cout << "Queen";
            break;
        case 12:
            std::cout << "King";
            break;
        default:
            std::cout << this->value % 13 + 1;
            break;
    }
    switch (this->suit) {
        case 0:
            std::cout << " of Clubs\n";
            break;
        case 1:
            std::cout << " of Hearts\n";
            break;
        case 2:
            std::cout << " of Diamonds\n";
            break;
        case 3:
            std::cout << " of Spades\n";
            break;
        default:
            std::cout << " of " + this->suit;
            break;
    }
}