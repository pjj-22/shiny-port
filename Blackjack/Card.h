// Card.h
#ifndef CARD_H
#define CARD_H


class Card {
    public:
    //0-12
    int value;
    //0-3
    int suit;

    Card(int, int);
    
    void printCard();
};

#endif