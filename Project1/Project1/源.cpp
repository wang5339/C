#include<stdio.h>
int  main(){
	int i, j, k = 1;
	long 	sum=0;
	for (i = 1; i <= 100; i++) {
		k = 1;
		for (j = 1; j <= i; j++) {
			k *= j;
		}
		sum += k;
	}
	printf("%d", sum);
	return 0;
}