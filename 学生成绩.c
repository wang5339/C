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
	printf("������Ҫ�����ѧ������ \n");
	int i,j,n;
	scanf("%d",&n);
	getchar();
	printf("�����������Ա𣬳ɼ���ѧ�ţ�����\n");
	for(i=1;i<=n;i++){
		scanf("%c%d%d",&stu[i].xb,&stu[i].cj,&stu[i].xh); 
		getchar();
		fflush(stdin);
	    gets(stu[i].xm);
	}
	printf("�Ա�Ϊm���ҳɼ�>=90���У�\n");
	for(i=1;i<=n;i++){
	    if(stu[i].cj>=90&&stu[i].xb=='m'){
	    	printf("%s  %d   %d\n",stu[i].xm,stu[i].cj,stu[i].xh);
	    }
	}
	return 0;
}
