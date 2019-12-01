//将输入的n个（n≤10）数据中重复的数据删除，即重复的数据只保留1个。
//输入格式:
//首先输入整数n，然后在下一行输入n个整数。
//输出格式:
//在一行中输出去掉了重复数据后的值 ，数据之间用一个空格分隔，最后一个数据后面无空格。
#include<stdio.h>
int main(){
	int n, i,j,x,k=0,a[100];
	for(i=0;i<100;i++){
		a[i]=0;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a[x]++;
	}
	for(j=0;j<100;j++){
		if(a[j]!=0){
			k+=a[j];
			printf("%d",j);
			a[j]=0;
			if(k==n){
				printf("\n");
			}else{
				printf(" "); 
			}
		}
		
		
	}
	return 0;
	
	
}
