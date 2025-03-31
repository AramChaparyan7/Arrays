#include <stdio.h>
#define size 10

int main(){
	float arr[size]={};
	printf("input 10 numbers\n");
	for(int i=0;i<size;++i){
		scanf("%f",&arr[i]);
		arr[i]/=size;
	}
	for(int i=0;i<size;++i){
		printf("%.1f ",arr[i]);
	}
	printf("\n");
	return 0;
}
