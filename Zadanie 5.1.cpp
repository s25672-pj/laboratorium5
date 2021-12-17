
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int ilosc;
    int wartosc;
    cout << "Podaj liczbe elementow wektora: ";
    cin >> ilosc;
    vector<int>vec;
    for (auto i = 0; i < ilosc; i++)
    {
        cout << "Wpisz wartosc elementu wektora[" << i << "]:";
        cin >> wartosc;
        vec.push_back(wartosc);
        
    }
    int x = 0;
    int y;
    for (auto i = 0; i < ilosc; i++)
    {
        if (vec[i] > x)
        {
            x = vec[i];
            y = i;
        }
    }
    std::cout << "Maksymalny element wektora to wektor[" << y << "] i jego wartosc to: " << x;
}



