#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int DECK_SIZE = 54; 
const int SUIT_SIZE = 13;

string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

void shuffleDeck(string deck[], int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        string temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

int main() {
    string deck[DECK_SIZE];
    int index = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < SUIT_SIZE; j++) {
            deck[index] = ranks[j] + " of " + suits[i];
            index++;
        }
    }

    deck[52] = "Red Joker";
    deck[53] = "Black Joker";

    srand(time(NULL)); 

    string originalDeck[DECK_SIZE];
    for (int i = 0; i < DECK_SIZE; i++) {
        originalDeck[i] = deck[i];
    }

    shuffleDeck(deck, DECK_SIZE);

    cout << "Original deck:" << endl;
    for (int i = 0; i < DECK_SIZE; i++) {
        cout << originalDeck[i] << endl;
    }

    cout << endl << "Shuffled deck:" << endl;
    for (int i = 0; i < DECK_SIZE; i++) {
        cout << deck[i] << endl;
    }

    return 0;
}
//Prvo go zgolemuvame spilot za 2 poradi dodadenite dzokeri ,gi vpisuvame drugite vidovi na karti sto gi imame i potoa ja pisuvame funkcijata za mesanje na spilot.
//Odkako e napisana funkcijata vnesuvame for ciklus koj sto go podreduva spilot po red.
//Gi dodavame dvata barani dzokeri.
//Go vmetnuvame i generatorot na broevi.
//Go inicijalizirame orginalniot spil vo nova promenliva za da mozi da se ispecati.
//Ja vmetnuvame funkcijata za mesanje na spil.
//Posledno se pecatat spilovite prvo po red i potoa izmesan.