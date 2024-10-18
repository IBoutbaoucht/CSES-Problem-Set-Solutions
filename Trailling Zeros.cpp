#include <bits/stdc++.h>

typedef long long ll ;
ll n ,ans ;


int main(){
	scanf("%lld",&n);
	while(n){
		n/=5 ;
		ans+=n; 
	}
	
	printf("%lld",ans);
	
	return 0;
}
