#include<stdio.h>
int sum1(int x)
{   int i,s=0;
for(i=1;i<x;i++)
if(x%i==0) s+=i;
return s;
}
int main()
{   int i,j;
for(i=1;i<10000;i++)
{   j=sum1(i);
if(j>i&&sum1(j)==i)
printf("%d %d\n",i,j);
}
return 0;
}
