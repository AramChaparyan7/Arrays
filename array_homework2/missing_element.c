#include <stdio.h>
#define size 9

int  main(){
	int arr[size]={};	
	printf("input 9 numbers\n");
	for(int i=0;i<size;++i){
		scanf("%d",arr+i);
	}
	int sum=0;
	for(int i=0;i<size;++i){
		sum+=arr[i];
	}
	printf("%d",size*size(-1)-sum);
	return 0;
}
