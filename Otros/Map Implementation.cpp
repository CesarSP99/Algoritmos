///Implementación de mapas en C++
#include <iostream>
#include <map>
#include <vector>

using namespace std ;

int main ()
{
	map <char,int> apl;
	cin>>apl['a'] //13
	cin>>apl['b'] //98
	//apl.insert ( make_pair ('a', 13) );
	//apl.insert ( make_pair ('b', 98) );
	cout << apl ['a'] <<"\n";
	cout << apl ['b'] <<"\n";
	//Notese que no existe apl['c'] por lo que se creara y pondra como valor 0
	cout << apl ['c'] <<"\n";
	//Acceso a las llaves y valores mediante iteradores
	for(map <char,int>::iterator it=apl.begin();it!=apl.end();it++) {
		cout<<it->first<<" "<<it->second<<"\n";
	}
}
//Resultado: a 13 b 98 c 0