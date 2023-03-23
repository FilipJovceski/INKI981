#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    enum BrojDen {ponedelnik = 0, vtornik = 1, sreda = 2, cetvrtok = 3, petok = 4, celosen = 5};
    BrojDen brden = celosen;

    cout << "Vnesi Den od nedelata (0-5): ";
    cin >> brden;

    switch(brden) {
        case ponedelnik:{
            cout<<"Raspored ponedelnik\n";
            break;
        }

        case vtornik:{
            cout<<"Raspored vtornik\n";
            break;
        }

        case sreda:{
            cout<<"Raspored sreda\n";
            break;
        }

        case cetvrtok:{
            cout<<"Raspored cetvrtok\n";
            break;
        }

        case petok:{
            cout<<"Raspored petok\n";
            break;
        }

        case celosen:{
            cout<<"Celosen raspored\n";
            cout<<"Raspored ponedelnik\n";
            cout<<"Raspored vtornik\n";
            cout<<"Raspored sreda\n";
            cout<<"Raspored cetvrtok\n";
            cout<<"Raspored petok\n";
            break;
        }

        default:
            cout << "Pogresen del od nedelata\n";
            break;
    }

    return 0;
}