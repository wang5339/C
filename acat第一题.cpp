#include<stdio.h>
int fun(const char*s){
	int i=0;
	int x=0;
	while(s[i]!='\0'){
		i++;
		x++;
	}
	return x;
	
} 
int main(){
	char str[]="hello word!";
	printf("%d",fun(str));
	return 0;
}
