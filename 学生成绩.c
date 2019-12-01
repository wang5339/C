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
	printf("请输入要处理的学生数： \n");
	int i,j,n;
	scanf("%d",&n);
	getchar();
	printf("请依此输入性别，成绩，学号，姓名\n");
	for(i=1;i<=n;i++){
		scanf("%c%d%d",&stu[i].xb,&stu[i].cj,&stu[i].xh); 
		getchar();
		fflush(stdin);
	    gets(stu[i].xm);
	}
	printf("性别为m，且成绩>=90的有：\n");
	for(i=1;i<=n;i++){
	    if(stu[i].cj>=90&&stu[i].xb=='m'){
	    	printf("%s  %d   %d\n",stu[i].xm,stu[i].cj,stu[i].xh);
	    }
	}
	return 0;
}
