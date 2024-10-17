#include <bits/stdc++.h>

using namespace std ;
typedef long long ll ;

int main(){
	ll n ;
	scanf("%lld",&n);
	ll steps = 0 ;
	ll a ,b ;
	scanf("%lld",&a);
	for (int i = 0 ;i<n-1 ;i++){
		scanf("%lld",&b);
		if (b<a){ steps += a-b ; b = a ;} 
		a = b ;	
	} 
	printf("%lld",steps);
	
	
	return 0 ;
	
}
