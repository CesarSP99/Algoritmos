#include <iostream>
#include <vector>
using namespace std;
vector <int> finder(1000000);
int numSets;

void init_set(int n) {
	for(int i = 0; i < n; ++i)
		finder[i] = i;
	numSets = n;
}

bool find_set(int i) {
	return (i == finder[i]) ? i : finder[i] = find_set(finder[i]); 
}

bool is_same_set(int i, int j) {
	return find_set(i) == find_set(j);
}

void union_set(int i, int j) {
	finder[find_set(i)] = find_set(j);
}

int main() {
	return 0;
}

