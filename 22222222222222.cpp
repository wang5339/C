#include<stdio.h>
#include<math.h>
void fun(int a[],int n,int*min,int *max){
	*min=*max=a[0];
	int i;
	for(i=0;i<n;i++){
		if(a[i]>*max){
		    *max=a[i];
		}
		if(a[i]<*min){
			*min=a[i];
		}
	}
}
int main(){
	int a[10],min,n,i,max;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	fun(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("%d   %d",min,max);
	return 0;
}
