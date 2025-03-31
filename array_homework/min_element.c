#include <stdio.h>
#define size 10

int main(){
	int arr[size]={};
	printf("input 10 numbers\n");
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	for(int i=1;i<size;++i){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("answer is %d\n",min);
	return 0;
}
