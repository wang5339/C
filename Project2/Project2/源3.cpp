#include<stdio.h>
int a[101][101];
int main() {
	int b = 1, x = 5, y = 5, n = 5, c = 1;
	int a[5][5];
	y = 0;
	for (b = 0; b < 3; b++)
	{
		for (x = b; x < (5 - b); x++)
		{
			a[y][x] = c;
			c++;
		}
		if (x == 2 && y == 2)break;
		//for(x=0;x<5;x++){
		//	printf("%d  ",a[0][x]);
	//	}
		x--;
		for (y = b + 1; y < (5 - b); y++)
		{

			a[y][x] = c;
			c++;
		}
		y--;
		for (x = 3 - b; x >= b; x--)
		{
			a[y][x] = c;
			c++;
		}
		x++;
		for (y = 3 - b; y > b; y--)
		{
			a[y][x] = c;
			c++;
		}
		y++;
	}
	for (y = 0; y < 5; y++) {
		for (x = 0; x < 5; x++) {
			printf("%d   ", a[0][1]);
		}
		printf("\n");
	}
	return 0;
}