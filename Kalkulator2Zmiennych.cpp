#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b = 0;
    cout << "Jakie wartosci liczbowe dla a oraz b chcesz wprowadzic? " << endl;
    cin >> a;
    cin >> b;

    int suma = a+b;
    int roznica = a-b;
    int mnozenie = a*b;
    int dzielenie = a/b;

    int wybor;
    do
    { 
        cout << "Ktore dzialanie chcesz wykonac? " << endl;
        cout << "1-Suma   2-Roznica   3-Mnozenie   4-Dzielenie   0-Wyjscie" << endl;
        cin >> wybor;

        switch (wybor)
        {
            case 1:
                cout << "Suma Twoich liczb to: " << suma << endl;
                break;
            case 2:
                cout << "Roznica Twoich liczb to: " << roznica << endl;
                break;
            case 3:
                cout << "Mnozenie Twoich liczb to: " << mnozenie << endl;
                break;
            case 4:
                cout << "Dzielenie Twoich liczb to: " << dzielenie << endl;
                break;
            case 0:
                cout << "Dziekuje za skorzystanie z programu!";
                break;
            default:
                cout << "Niewlasciwa operacja, prosze sprobowac jeszcze raz";
                break;
        }
    } while (wybor != 0);
  
    return 0;
}
