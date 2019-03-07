#include <bits/stdc++.h>

using namespace std;

int MCD (int a,int b) {
	if(b==0) return a;
	return MCD (b,a%b) ; // recursion
}
int mcm (int a,int b) {
	return a*(b/MCD(a,b)) ; // recursion
}

int main () {
	cout<<MCD(4,8)<<endl; //4
	cout<<MCD(10,5)<<endl ; // 5
	cout<<endl;
	cout<<mcm(4,8)<<endl ; //8
	cout<<mcm(10,5)<<endl ; //10
	return 0;
}
