#include <iostream>
#include <string>
#include "deck.h"

using namespace std;

int main()
{
  
    Deck Deck1;
    for (int i = 0; i < 52; i++) {
        cout << Deck1.newDeck[i].cardId+"\n";
    }
    

   string myString{"This is a string"};
   cout << myString;
}