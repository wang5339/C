#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i, b, sum = 1, c = 1;
	for (a = 100; a <= 999; a++)
	{
		int first = a;
		sum = 0;
		while (a > 0)
		{
			b = a % 10;
			a /= 10;
			c = 1;
			for (i = 1; i <= 3; i++)
			{
				c *= b;
			}
			sum += c;
		}
		if (first == sum) {
			printf("%d", a);
		}

	}
	return 0;

}