#include <iostream>
#include <vector>
#include "Card.h"

int main() {
    Card newCard = Card(1, 1); 
    std::cout << newCard.suit + newCard.value;
    return 0;
}