#include<stdio.h>
#include <stdlib.h>
void prime(int p){
	int i;
	for(i=2;i<p;i++){
		if(p%i==0){
		return 0;
		}else{
		return 1;
		}
	}
}
void primesum(int m,int n){
	int a,sum=0;
	for(a=m;a<=n;a++){
		if(prime(a)==1){
			sum+=a;
		}
	}
	printf("%d",sum);
}
int main(){
    primesum(-1,10);
	return 0;
	
}
