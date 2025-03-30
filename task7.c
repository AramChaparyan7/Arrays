#include <stdio.h>

int main(){
	const int size=100;
	int arr[size][size];
	int num=0;
	printf("input size of array\n");
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int q=0;
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(i==j){
				q+=arr[i][j];
			}
		}
	}
	printf("sum is %d\n",q);
	return 0;
}
