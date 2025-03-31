#include <stdio.h>
#define size 10

int main(){
	int arr[size]={};
	printf("input 10 numbers\n");
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}
	int maxindex=0;
	for(int i=1;i<size;++i){
		if(arr[maxindex]<arr[i]){
			maxindex=i;
		}
	}
	printf("answer is %d\n",maxindex);
	return 0;
}
