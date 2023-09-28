#include <iostream>
#include <string>

using namespace std;

struct Card
{
    char suit;
    char rank;
    string cardId;
};

struct Card Deck[52];

char Suits[4]{'C', 'D', 'H', 'S'};
char Ranks[13]{'2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K', 'A'};

Card genCard(char dSuit, char dRank)
{
    Card newCard;
    newCard.suit = dSuit;
    newCard.rank = dRank;
    newCard.cardId += newCard.rank;
    newCard.cardId += newCard.suit;
    return newCard;
}

void buildDeck()
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
                Deck[cardNum] = genCard(suit, rank);
                cardNum++;
            }
        }
    }
}



int main()
{
  
    buildDeck();
    for (int i = 0; i < 52; i++) {
        cout << Deck[i].cardId;
    }
    

   string myString{"This is a string"};
   cout << myString;
}