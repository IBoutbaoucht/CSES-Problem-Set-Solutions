#include <bits/stdc++.h>

int n ;

int main(){
	scanf("%d",&n);
	if (n > 1 && n < 4){
		printf("NO SOLUTION");
	}
	else {
		if (n==4){
			printf("2 4 1 3");
		}
		else{
			int i = 1 ;
			while(i<=n){
				printf("%d ",i);
				i+=2;
			}
			i = 2 ;
			while(i<=n){
				printf("%d ",i);
				i+=2;
			}	
		}
	}
	
	return 0 ;
}
