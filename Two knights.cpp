#include <bits/stdc++.h>

using namespace std ;
typedef long long ll ;
int n ;

int main(){
	ll ways;
	scanf("%d",&n);
	for(ll k=1;k<=n;k++){
		ways = (k*k)*(k*k-1)/2 ;
		ways = ways - 4*(k-1)*(k-2);
		printf("%lld\n",ways);
		}
	
	return 0 ;

	}
	
