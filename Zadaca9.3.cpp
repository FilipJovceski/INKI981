#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
    int secret_number, guess, num_guesses = 0;

    
    srand(time(nullptr));

    secret_number = rand() % 100 + 1;

    do {
        cout << "Pogodete broj od 1 do 100 :";
        cin >> guess;

        num_guesses++;

        if (guess == secret_number) {
            cout << "Go pogodivte slucajniot broj " << num_guesses << " obidi." << endl;
        } else if (guess < secret_number) {
            cout << "Brojot e pogolem." << endl;
        } else {
            cout << "Brojot e pomal." << endl;
        }
    } while (guess != secret_number);

    return 0;
}
