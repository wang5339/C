#include<stdio.h>
struct f{
	int xh;;
	int  cj1;
	int  cj2;
	int  cj3;
	char xm[20];
};
int main(){
	int i,b[200];
  	struct f a[200];
  	int n;
  	scanf("%d",&n);
  	getchar();
  	for(i=1;i<=n;i++){
  		gets(a[i].xm);
  		scanf("%d %d %d %d",a[i].xh,&a[i].cj1,a[i].cj2,a[i].cj3);
	}
	for(i=1;i<=n;i++){
		b[i]=(a[i].cj1+a[i].cj2+a[i].cj3)/3;
		printf("%d",b[i]);
	}
	return 0;
}
