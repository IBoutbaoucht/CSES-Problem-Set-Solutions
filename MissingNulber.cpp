#include <bits/stdc++.h>

typedef long long ll ;
using namespace std ;
ll n ;
ll e ;
string input ;
vector<ll> L ;


int main(){
	(void)scanf("%lld",&n);
	for(ll i = 1;i<=n;++i){
		L.push_back(i);
	}
	cin.ignore() ;
	getline(cin,input);
	istringstream iss(input);

	while(iss >> e){
		L.erase(remove(L.begin(),L.end(),e),L.end());
	}
		
	printf("%lld",L[0]);
	return 0 ;
}
