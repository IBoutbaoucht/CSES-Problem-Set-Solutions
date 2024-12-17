#include<bits/stdc++.h>

typedef long long ll ;

using namespace std;

int main(){
    ll N , X ;
    cin >> N >> X ;
    vector<ll> T(N) ;
    vector<ll> P(N) ;
    for(int i=0;i<N;i++){
        cin >> T[i] ;
    }
    P[0] = T[0] ;
    for(ll i=1;i<N;i++){
        P[i] = P[i-1]+T[i] ;
    }
    vector<ll> C(N) ;
    for(ll i=0;i<N;i++){
         C[i] = P[i] + X ;
    }
    ll res = count(P.begin(),P.end(),X) ;
    map<ll,ll> mapC ;
    mapC[C[0]]++ ;
    for(ll j=1;j<N;j++){
        res+= mapC[P[j]] ;
        mapC[C[j]]++ ;
    }
    
    cout << res << endl ;
    return 0;
}