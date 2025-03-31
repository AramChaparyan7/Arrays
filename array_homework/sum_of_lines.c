#include <stdio.h>
#define size1 4
#define size2 3

int main(){
	int arr[size1][size2]={};
	printf("input numbers\n");
	for(int i=0;i<size1;i++){
		for(int j=0;j<size2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int q=0;
	for(int i=0;i<size1;i++){
		q=0;
		for(int j=0;j<size2;j++){
			q+=arr[i][j];
		}
		printf("%d\n",q);
	}
	return 0;
}
