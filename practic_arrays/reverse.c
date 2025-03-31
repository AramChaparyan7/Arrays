#include <stdio.h>
#define size 5

int main(){
	char arr[size]={};
	printf("input a line with 5 characters\n");
	for(int i=0;i<size;i++){
		scanf("%c",&arr[i]);
	}
	for(int i=0;i<size/2+1;i++){
		int temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
	}
	for(int i=0;i<size;++i){
		printf("%c",arr[i]);
	}
	printf("\n");
	return 0;
}
