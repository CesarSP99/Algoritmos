///Fibonacci no recursivo
#include <bits/stdc++.h>

using namespace std;

long long int fibo(long long  int n){
    long long int a=1, b=1, c=0;
    if(n==1 or n==2) return 1;
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main(){
	for(int i=1;i<200;i++){
        cout<<i<<": "<<fibo(i)%10<<endl;
	}
	return 0;
}