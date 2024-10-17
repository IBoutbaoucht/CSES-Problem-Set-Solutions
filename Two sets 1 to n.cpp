#include <bits/stdc++.h>

typedef long long ll ;
using namespace std ;

int n ; 


int main(){
	scanf("%d",&n);
	if (n%4 == 1 || n%4 == 2){ 
	printf("NO");
	}
	else{
		printf("YES\n");
		if(n%4 == 3){
			printf("%d\n%d ",n/2,n);
			for(int i=2;i<=n/2;i+=2){
				printf("%d %d ",i,n-i);
			}
			printf("\n%d\n",n/2+1);
			for(int i=1;i<=n/2;i+=2){
				printf("%d %d ",i,n-i);
			}	
		}
		else{
			printf("%d\n",n/2);
			for(int i=1;i<=n/2;i+=2){
				printf("%d %d ",i,n-i+1);
			}
			printf("\n%d\n",n/2);
			for(int i=2;i<=n/2;i+=2){
				printf("%d %d ",i,n-i+1);
			}
			
		}
		
	}
	
	
	return 0 ;
}
