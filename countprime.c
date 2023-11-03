#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int countprime(int n){
int* arr=calloc(n,sizeof(int));
int i=4;

//mark all the even positions as 1,starting from 4 as 2 is a prime number

while(i<n){
    arr[i]=1;
    i=i+2;
}
i=3;
int count=0;
if(n<=2){
    return 0;
}
 int j=pow(i,2);
while(i<sqrt(n)){
    if(arr[i]==0)//skip numbers already marked as 1,which means they are composite{
   while(j<n){
        arr[j]=1;
        j=j+(i*2);
    }//mark all the multiples of prime number as 1 skipping even numbers
    }
    i++;
    j=pow(i,2);
}
i=2;
while(i<n){
    if(arr[i]==0){
        count++;
    }
    i++;
}
free(arr);
return count;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",countprime(n));
	return 0;
}
