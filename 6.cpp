#include<stdio.h>
int main(){
	int i;
	for(i=1;i<10;i++){
		if(i%3){
			i++;
			printf("%d\n",i);
			++i;
			printf("%d\n",i);
		}
	}
	return 0;
}
