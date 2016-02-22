#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v;
	for(int i = 1; i <= 9; ++i)
		v.push_back(i);
	int lo = 0, hi = 9, mid;
	int x = 6; // vamos a buscar el 6.
	while(hi - lo > 1) {
		mid = lo + (hi - lo) / 2;
		cerr << "middle " << mid << endl;
		if(v[mid] > x)
			hi = mid;
		else
			lo = mid;
	}
	cout << x << " esta en la posicion " << lo << endl;
	return 0;
} 
