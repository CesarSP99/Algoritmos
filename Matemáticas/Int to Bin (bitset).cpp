///Convertir de entero a binario en string
#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int num;
    cin>>num;
    string binario=bitset<64> (num).to_string(); ///Bajar el tamaño del bitset dependiendo del tipo de dato
	cout<<binario;
    return 0;
}
