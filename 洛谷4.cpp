#include<stdio.h>
int su(int c){
	if(c==1){
		return 0;
	}
	for(int d=2;d<c;d++){
		if(c%d==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n,k,a[21];
	scanf("%d",&n,&k);
	for(i=1;i<=n;i++){
		scanf("%d",a[i]);
	}
	
	
}
