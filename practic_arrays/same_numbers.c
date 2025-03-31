#include <stdio.h>
#define size 5

int main(){
	int arr1[size]={};
	int arr2[size]={};
	printf("input numbers of first array\n");
	for(int i=0;i<size;++i){
		scanf("%d",&arr1[i]);
	}
	printf("input numbers of second array\n");
	for(int i=0;i<size;++i){
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<size;i++){
		if(arr1[i]==arr2[i]){
			printf("%d ",arr1[i]*arr2[i]);
		}
	}
	return 0;
}
