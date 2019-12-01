#include <stdio.h>
int main(){
	char a;
	int i,j=0,sum=0;
	for(i=0;i<20;i++){
		scanf("%c",&a);
		if(a=='*'||a=='#'||a==' ') {
			sum+=1;
		}
		else if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9') {
			sum+=1;
		}
		else if(a=='a'||a=='d'||a=='g'||a=='j'||a=='m'||a=='p'||a=='t'||a=='w'||a=='0') {
			sum+=2;
		}
		else if(a=='b'||a=='e'||a=='h'||a=='k'||a=='n'||a=='q'||a=='u'||a=='x') {
			sum+=3;
		}
		else if(a=='c'||a=='f'||a=='i'||a=='l'||a=='o'||a=='r'||a=='v'||a=='y') {
			sum+=4;
		}
		else if(a=='s'||a=='z') {
			sum+=5;
		}
	} 
	printf("%d",sum);
	
	return 0; 
}
