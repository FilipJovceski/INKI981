#include <iostream>
#include <cstring>
//Filip Jovcheski INKI981
using namespace std;

void zamenaIme(char *Ime)
{
    char symbols[] = "=+/|";
    for (int i = 0; i < 4; i++)
    {
        *(Ime + i) = symbols[i];
    }
}

void zamenaPrezime(char *Prezime)
{
    char symbols[] = "^#;!";
    for (int i = 0; i < 4; i++)
    {
        *(Prezime + i) = symbols[i];
    }
}

int main()
{
    char Ime[] = "Filip";
    char Prezime[] = "Jovcheski";

    
    cout << Ime << endl;
    cout << Prezime << endl;
    cout << endl;

    zamenaIme(Ime);
    zamenaPrezime(Prezime);
    cout << Ime << endl;
    cout << Prezime << endl;
    return 0;
}