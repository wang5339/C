#include<stdio.h>
int a[101];
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(k=1;k<=n;k++){
	if(a[1]<a[k]){
		j=a[1];
		a[1]=a[k];
		a[k]=j;
	}
	}
	printf("%d",a[1]);
		for(k=1;k<=n;k++){
	if(a[n]>a[k]){
		j=a[n];
		a[n]=a[k];
		a[k]=j;
	}
	}
	printf("%d",a[n]);
	return 0;
}
