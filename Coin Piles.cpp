#include <bits/stdc++.h>

typedef long long ll ;
int t ;
ll a,b ;

int main(){
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%lld %lld",&a,&b);
		if (2*b-a >= 0 && 2*a-b >=0 && (2*a-b)%3 == 0 && (2*b-a)%3 == 0) {
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		}
		
		return 0 ;

	}
	

