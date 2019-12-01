#include<stdio.h>
int a[101],n;
void fun(int left,int right){
	if(left>right){
		return ;
	}
	int i,j,t,temp;
	i=left;
	temp=a[left];
	j=right;
	while(a[j]>temp){
		j--;
	}
	while(a[i]<temp){
		i++;
	}
	if(i<j){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	if(i==j){
	//	temp=a[left];
		a[left]=a[i];
		a[i]=temp;
	}
	fun(left,i-1);
	fun(i+1,right);
	
}
int main(){
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	fun(1,n);
	for(i=1;i<=n;i++){
		printf("%d   ",a[i]);
	}	
	return 0;
} 

