#include <stdio.h>
#define size 5
int main(){
	int arr[size][size]={};
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int q=0;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(i==j){
				q+=arr[i][j];
			}
		}
	}
	printf("sum is %d\n",q);
	return 0;
}
