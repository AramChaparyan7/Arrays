#include <stdio.h>
#define size 10

int main(){
	int arr[size]={};
	printf("input 10 numbers\n");
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}
	int sum=0,mul=1;
	for(int i=0;i<size;++i){
		sum+=arr[i];
		mul*=arr[i];
	}
	printf("%d %d\n",sum,mul);
	return 0;
}
