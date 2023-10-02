#include "deck.h"

Deck::Deck()
{
    buildDeck();
}

Deck::Card Deck::genCard(char dSuit, char dRank)
{
    Card newCard;
    newCard.suit = dSuit;
    newCard.rank = dRank;
    newCard.cardId += newCard.rank;
    newCard.cardId += newCard.suit;
    return newCard;
}

void Deck::buildDeck()
{
    char suit;
    char rank;
    int cardNum{0};
    while (cardNum < 52)
    {
        for (int i = 0; i < 4; i++){
            suit = Suits[i];
            for (int i = 0; i < 13; i++){
                rank = Ranks[i];
                newDeck[cardNum] = genCard(suit, rank);
                cardNum++;
            }
        }
    }
}