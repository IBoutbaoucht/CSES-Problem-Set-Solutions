#include <bits/stdc++.h>

using namespace std;
int n,x,res;

int main(){
	scanf("%d",&n);
	for(int i=1 ; i<=n ; ++i){
		res = res ^ i ;
	}
	for(int i=1; i<n ; i++){
		scanf("%d",&x);
		res = res ^ x ;
	}
	printf("%d\n",res);
	return 0 ;
}
