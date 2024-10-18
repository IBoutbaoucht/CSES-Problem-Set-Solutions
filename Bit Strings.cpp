
#include <bits/stdc++.h>

typedef long long ll ;
	ll n ;
	ll res ;
	ll mod = 1000000007  ;
	ll k ;


int main(){
	scanf("%lld",&n);
	k = n/62 ;
	n = n%62;
	res = 1LL << n ;
	for(int i=0;i<k;i++){
		res = ((res%mod) * 145586002)%mod ;
	}	
	
	printf("%lld",res);
	
	
	return 0 ;
	
}
