///Criba para encontrar los números primos de 0 a n
#include <bits/stdc++.h>
using namespace std;

const long long int n=1000000;
bool criba[n+1];

void gencriba(){
    memset(criba,true,sizeof(criba));
    criba[0]=criba[1]=false;
    for(long long int i=2;i<=n;++i){
        if(criba[i]){
            for(long long int j=i;j<=n/i;++j){
                criba[j*i]=false;
            }
        }
    }
}

int main()
{
    gencriba();
    int c, i=1;
    cin>>c;
    while(i<=c){
        if(criba[i]) cout<<i<<endl;
        i++;
    }
    return 0;
}
