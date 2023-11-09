#include "deck.h"

Deck::Deck()
// Constructor. Calls buildDeck() when the class is instantiated to... build the deck.
{
    buildDeck();
}

Deck::Card Deck::genCard(char dSuit, char dRank)
// Generates a card with a rank (2 thru Ace) represented by a single character (10 is represented by an X)
// and suit also represented by a single character (the first letter of the suit name).
// Together, the rank and suit respectively for the cardId, a two-character string representing the card.
// For instance, the Ace of Spades is represented as "AS" and a Five of Clubs is "5C"
{
    Card newCard;
    newCard.suit = dSuit;
    newCard.rank = dRank;
    newCard.cardId += newCard.rank;
    newCard.cardId += newCard.suit;
    return newCard;
}

void Deck::buildDeck()
// Builds the deck as an array by iterating through the Suits and Ranks arrays and feeding the values 
// to genCard(), the generated card goes into the newDeck[]. Called when Deck is instantiated. ADD: Shuffle the deck after it has been generated. 
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