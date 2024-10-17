#include <bits/stdc++.h>

using namespace std;
typedef long long ll ;
const ll mod = 1e9+7 ;
int n ;
ll a , b ;

ll fastpow(ll a , ll b){
	ll res = 1 ;
	while(b>0){
		if (b&1) res = (res*a)%mod;
		a = (a*a)%mod ;
		b >>=1 ;
	}
	return res ;

}

int main(){
	scanf("%d",&n);
	int i = 0 ;
	for(i=0;i<n;i++){
		scanf("%lld %lld",&a,&b);
		printf("%lld\n",fastpow(a,b));
	}
	
}
