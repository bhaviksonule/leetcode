#include<stdio.h>
int findfirstsetbit(int n){
	int i=1;
	while(n%2!=1){
		i++;
		n=n/2;
	}
	return i;
}
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n==0){
		printf("set bit doesnt exists");
		return 0;
	}
	printf("position of firstsetbit is : %d",findfirstsetbit(n));
	return 0;
}
