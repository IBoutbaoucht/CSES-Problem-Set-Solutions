#include <bits/stdc++.h>

typedef long long ll ;

using namespace std;
int t ;
ll y,x ,l ,res ;
int main(){
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%lld %lld",&x,&y);
		l = max(y,x);
		if (l&1){
			if(x<y){
				printf("%lld\n",l*l-x+1);
			}
			else{
				printf("%lld\n",l*l-2*x+y+1);
			}
		}
		else{
			if(x<y){
				printf("%lld\n",l*l-2*y+x+1);
			}
			else{
				printf("%lld\n",l*l-y+1);
			}
		}
			
		
	}
	
	
	
	return 0 ;
}
