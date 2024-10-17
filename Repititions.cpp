#include <bits/stdc++.h>

using namespace std ;

int main(){
	string sequence ;
	cin >> sequence ;
	int n = sequence.size();
	int maxR = 1 ;
	int i = 0 ;
	while (i<n){
		int k = i+1 ;
		while (sequence[k]==sequence[i]){
			k+=1 ;
		}
		maxR = max(maxR,k-i);
		i = k ;
	}
	printf("%d",maxR);
	
	return 0 ;
}
