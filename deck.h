#include <iostream>
#include <string>

using namespace std;

class Deck{
    private:
        //Variables, Objects
        char Suits[4]{'C', 'D', 'H', 'S'};
        char Ranks[13]{'2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K', 'A'};
        struct Card{char suit; char rank; string cardId;} _card;
        Card newDeck[52];
        
        //Functions
        void buildDeck();
        Card genCard(char dSuit, char dRank);

    public:
        //Constructor
        Deck();
        //Variables, Objects
        //Functions

};

