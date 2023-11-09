#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "deck.h"

using namespace std;

int main()
{
  
    Deck Deck1; // Instantiate our Deck.

    // Starting to build out the shuffling algorithm below:
    srand(time(NULL)); // Seed rand() with current time()
    int breakRand{rand() % 11+45}; // Sets int breakRand to a random number between 45 and 55 (representing the percentage of the deck randomly grabbed when breaking the deck prior to a riffle)
    int partSize{(breakRand * 52)/100}; // Determine how many cards the percentage of the deck decided above actually comes out to and store in partSize
    Deck::Card rifflePart[partSize]; // Instantiate an array holding the number of cards to be separated out (represented by partSize)
    
    for (int i = 0; i < partSize; i++)
    {
        rifflePart[i]={Deck1.newDeck[i]};
        
    }

    cout << partSize;

    // Iterates through the filled newDeck[] and prints the CardId of each Card. For testing and verification.
    /*
    for (int i = 0; i < 52; i++) {
        cout << Deck1.newDeck[i].cardId+"\n";
    }
    */



    // This is my emotional support string.
   string myString{"This is a string"};
   cout << myString;

}