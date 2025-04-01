#include <stdio.h>
#define size 10

int  main(){
	int arr[size]={};
	int target=0;
	printf("input 10 numbers\n");
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&target);
	int q=-1;
	for(int i=0;i<size;++i){
		if(arr[i]==target){
			q=i;
		}
	}
	printf("%d\n",q);
	return 0;
}
