///Invertir un número
#include <bits/stdc++.h>

using namespace std;

long long int inv(long long int l){
    long long int aux=0;
    while(l>0){
        aux*=10;
        aux+=l%10;
        l/=10;
    }
    return aux;
}

int main(){
    long long int x;
	cout<<inv(x)<<endl;
    return 0;
}
