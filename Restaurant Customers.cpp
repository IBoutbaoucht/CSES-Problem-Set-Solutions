
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    std::vector<int> A(n) ;
    vector<int> L(n) ;
    for(int i=0;i<n;i++){
        cin >> A[i] ;
        cin >> L[i] ;
    }
    sort(A.rbegin(),A.rend());
    sort(L.rbegin(),L.rend());
    int a = n ;
    int l = n ;
    vector<int> R ;
    while(!A.empty() or !L.empty()){
        if (A.empty()){
            break ;
        }
        if (A[a-1] == L[l-1] ){
            continue ;
            A.pop_back() ;
            L.pop_back() ;
            a-=1 ;
            l-=1 ;
        }
        if (A[a-1] < L[l-1] ){
            R.push_back(1) ;
            A.pop_back() ;
            a-=1 ;
        }else {
            R.push_back(-1) ;
            L.pop_back() ;
            l-=1 ;
        }
    }
    cout << endl ;
    for(int i=1;i<R.size();i++){
        R[i]+= R[i-1] ;
    }
    int r = 1 ;
    for(auto x:R){
        r = max(r,x) ;
    }
    
    cout << r << endl ;
    return 0;
}
