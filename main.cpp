#include <iostream>
#include <string>

using namespace std;

int main()
{
    int liczba, dzielnik;


     cout << "Wprowadz liczbe calkowita : ";

    while(cin>>liczba)
    {

    cout<< "Wprowadziles liczbe: "<< liczba<< ". Dzielniki tej liczby to: " <<endl;

    for(dzielnik =1; dzielnik <= liczba; dzielnik++)
    {
    if (liczba%dzielnik==0)

     cout<<dzielnik << ","<< endl;


    }
    cout<< endl;
    cout<< "Mozesz wprowadzic kolejna liczbe calkowita:"<< endl;
}

    return 0;
}

