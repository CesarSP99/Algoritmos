///Factorizacion LIBRO DE LA PAZ
#include <bits/stdc++.h>

using namespace std;

int C[10000001];
int N=10000000;

void iniciar_criba(){
	for(int i=0;i<=N;i++) C[i]=i;
	C[0]=C[1]=-1;
	for(int i=2;i*i<=N;i++){
		if(C[i]==i){
			for(int j=i+i;j<=N;j+=i)
			C[j]=i;
		}
	}
}

void fp (int X){
	if(X <=1) return ;
	int a=1;
	int Y=X/C[X];
		while(C[X]==C[Y]){
			a++;
			Y=Y/C[Y];
		}
		fp(Y);
		cout<<C[X]<<"^"<<a<<endl ;
}

int main () {
	int x ;
	iniciar_criba () ;
	while ( cin > > x ) {
	fp ( x ) ;
	}
	return 0;
}
