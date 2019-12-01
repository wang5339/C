#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(int arr[],int size)
{
	int i,j,tmp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}
int main(){
	int n[10],i;
	for(i=0;i<10;i++){
	scanf("%d",&n[i]);
	}
	sort(n,10);
		for(i=0;i<10;i++){
	printf("%d   ",n[i]);
	}
	
}
