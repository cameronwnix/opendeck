#include <iostream>
#include <string>

using namespace std;

class Deck{
    public:
        //Constructor
        Deck();

        //Variables, Objects
        struct Card{char suit; char rank; string cardId;} _card; // Struct representing a card.
        Card newDeck[52]; // Array of Cards representing the Deck. Used by buildDeck().

        //Functions
    private:
        //Variables, Objects
        char Suits[4]{'C', 'D', 'H', 'S'}; // Array of card suits represented by the first char of their names (Clubs, Diamonds, Hearts, Spades). Used by genCard().
        char Ranks[13]{'2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K', 'A'}; // Array of card ranks represented by chars (10 is represented as X). Used by genCard().
         
        
        //Functions
        void buildDeck();
        Card genCard(char dSuit, char dRank); // Generates each Card. Used by buildDeck().



};

