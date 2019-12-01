#include<stdio.h>
int a[100];
int main(){
	int i,k;
	scanf("%d",&k);
	a[1]=1,a[2]=1;
	for(i=3;i<=k;i++){
		a[i]=a[i-1]+a[i-2];
	}
	printf("%d",a[k]);
	return 0;
}
