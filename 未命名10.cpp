#include<stdio.h>
int  main(){
	int i, j;
	double k = 1;
	double sum=0;
	for (i = 1; i <= 100; i++) {
		k = 1;
		for (j = 1; j <= i; j++) {
			k *= j;
		}
		sum += k;
	}
	printf("%f", sum);
	return 0;
	}
