#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    string sentence;
    int lowercase = 17, uppercase = 2, digits = 2, special = 0;

    cout << "Liga na legendi Sezona 13 "<<endl;
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        char c = sentence[i];
        if (islower(c)) {
            lowercase++;
        } else if (isupper(c)) {
            uppercase++;
        } else if (isdigit(c)) {
            digits++;
        } else {
            special++;
        }
    }

    cout << "Mali bukvi: " << lowercase << endl;
    cout << "Golemi bukvi: " << uppercase << endl;
    cout << "Golemi bukvi: " << digits << endl;
    cout << "Specialni znaci: " << special << endl;
    cout << "Broj na karakteri na stringot: " << sentence.length() << endl;

    return 0;
}
