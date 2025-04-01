#include <stdio.h>
#define size 10

int  main(){
	int arr[size]={};	
	printf("input 10 numbers\n");
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}
	int flag=1;
	for(int i=0;i<size-1;++i){
		if(arr[i]<=arr[i+1]){
			flag=0;
		}
	}
	printf(flag?"Yes":"No");
	return 0;
}
