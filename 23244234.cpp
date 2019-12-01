int main() {
	int a[5][5] = { 0 };
	int j = 1;
	int n=5,b=0,c=0,d=0;
	int e = 0;
	//scanf_s("%d", &n);
	for (;a[2][2]==0;)
	{
		for (; b < n; b++)
		{
			a[c][b] = j++;
		}b=n-1; c++;
		for (; c < n; c++)
		{
			a[c][b] = j++;
		}c--; b--;
		for (; b >= e; b--)
		{
			a[c][b] = j++;
		}b++; c--;
		for (; c >= e + 1; c--)
		{
			a[c][b] = j++;
		}c++; e++; b++;
			
		n--;
	}
	int f = 0;
	int h = 0;
	for (; f < 5; f++) {
		for (h=0; h < 5; h++)
			printf("%d\t ", a[f][h]);
		printf("\n");
	}

