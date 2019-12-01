#include<stdio.h>
struct f{
	int xi;
	int yi;
};
int main(){
	struct f d[281];
	int n,s,a,c=0,b,sum=0,i,j,k;
	scanf("%d %d",&n,&s);
	scanf("%d %d",&a,&b);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&d[i].xi,&d[i].yi);
	}
	for(i=1;i<n;i++)
		for(j=1;j<n-i;j++)
			if(d[i].yi>d[j].yi){
				d[0]=d[i];
				d[i]=d[j];
				d[j]=d[0];
			}
	d[0].xi=0;
	d[0].yi=0;
	for(i=1;i<=n;i++){
		sum+=d[i].yi;
		c++;
  		if(sum>s){
  			printf("%d",c-1);
  			break;
		  }	
	}
		return 0;
}
