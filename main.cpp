#include <iostream>
#include <string>
#include "deck.h"

using namespace std;

int main()
{
  
    Deck Deck1; // Instantiate our Deck.

    // Starting to build out the shuffling algorithm below:
    

    // Iterates through the filled newDeck[] and prints the CardId of each Card. For testing and verification.
    for (int i = 0; i < 52; i++) {
        cout << Deck1.newDeck[i].cardId+"\n";
    }
    
    // This is my emotional support string.
   string myString{"This is a string"};
   cout << myString;

}