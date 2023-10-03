#include <iostream>
#include <string>

using namespace std;

class Deck{
    private:
        //Variables, Objects
        char Suits[4]{'C', 'D', 'H', 'S'}; // Array of card suits represented by the first char of their names (Clubs, Diamonds, Hearts, Spades). Used by genCard().
        char Ranks[13]{'2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K', 'A'}; // Array of card ranks represented by chars (10 is represented as X). Used by genCard().
        struct Card{char suit; char rank; string cardId;} _card;        
        
        //Functions
        void buildDeck();
        Card genCard(char dSuit, char dRank); // Generates each Card. Used by buildDeck().

    public:
        //Constructor
        Deck();

        //Variables, Objects
        Card newDeck[52]; // Array of Cards representing the Deck. Used by buildDeck().

        //Functions

};

