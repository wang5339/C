#include<stdio.h>
#include<string.h>
#include <conio.h>
#include <io.h>
struct student{
	int xh;
	char xb;
	int cj1;
	int cj2;
	int cj3;
	char xm[20];
};
int main(){
	struct student stu[30];
	int i,j,n,b[30];
	scanf("%d",&n);
	getchar();
	for(i=1;i<=n;i++){
		scanf("%d %d %d %d",&stu[i].cj1,&stu[i].cj2,&stu[i].cj3,&stu[i].xh);
	    gets(stu[i].xm);
	}
	for(i=1;i<=n;i++){
		b[i]=(stu[i].cj1+stu[i].cj2+stu[i].cj3)/3;
	    	printf("%s %d %d\n",stu[i].xm,stu[i].xh,b[i]);
	    }
	return 0;
}
