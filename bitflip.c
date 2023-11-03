#include<stdio.h>
int bitflipcount(int a,int b){
	int c=a^b;
	int i=0;
	while(c!=0){
		if(c%2==1){
			i++;
		}
		c=c/2;
	}
	return i;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int result=bitflipcount(a,b);
	printf("%d",result);
	return 0;
}

