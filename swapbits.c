#include<stdio.h>
int swap(int n){
	int evenbits= n & 0XAAAAAAAA;
	int oddbits= n & 0X55555555;
	evenbits>>=1;
	oddbits<<=1;
	return evenbits|oddbits;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",swap(n));
	return 0;
}
