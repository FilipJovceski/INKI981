#include <iostream>
//Filip Jovcheski INKI981

using namespace std;

int main()
{
    char str[] = "Pop Pero Vrcak";
    char *ptr = str;

    cout << "Pesna: " << ptr << endl;
    cout << "Pocetna pozicija: " << *ptr << endl;
    cout << "Adresa na pocetok: " << (void *)ptr << endl;

    ptr = str + 9;
    cout <<endl;

    cout << "Sodrzina po premesten pocetok: " << ptr << endl;
    cout << "Pocetna pozicija: " << *ptr << endl;
    cout << "Adresa od koja pocnuva novata sodrzina: " << (void *)ptr << endl;

    return 0;
}