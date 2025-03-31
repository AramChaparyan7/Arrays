#include <stdio.h>
#define size 5

int main(){
	int arr[size]={};
	printf("inout 5 numbers\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int arr2[size]={};
	for(int i=1;i<size;i++){
		arr2[i-1]=arr[i];
	}
	arr2[size-1]=arr[0];
	for(int i=0;i<size;i++){
		printf("%d",arr2[i]);
	}
	return 0;
}
