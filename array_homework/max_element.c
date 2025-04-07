#include <stdio.h>
#define size 10

int main(){
	int arr[size]={};
	printf("input 10 numbers\n");
	for(int i=0;i<size;++i){
		scanf("%d",arr+i);
	}
	int max=arr[0];
	for(int i=1;i<size;++i){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("max element is %d\n",max);
	return 0;
}
