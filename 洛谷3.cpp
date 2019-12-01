#include<stdio.h>
int main(){
	char a[14]={0};
	int s=0,b=1,i;
	gets(a);
	for(i=0;i<12;i++){
		if(a[i]!='-'){
			s+=a[i]*b;
			b++;
		}
	}
	char c;
	c=(s%11);
	if(s==a[13]){
		printf("right");
	}else{
		a[12]=s;
		puts(a);
	}
	return 0;
}
