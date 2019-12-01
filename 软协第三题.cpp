#include<stdio.h>
#include<string.h>
int main(){
	int a[2][3]={1,2,3,4,5,6};
	int(*p)[3]=a;
	int *q=*a;
	
	
	printf("%d\n",a[1][2]);
	//printf("%d\n",y);
	printf("%d\n",q[5]);
	return 0;
} 
