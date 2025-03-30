#include <stdio.h>

int main(){
	const int size=100;
	int arr[size][size];
	int num1=0,num2=0;
	printf("input size of array\n");
	scanf("%d %d",&num1,&num2);
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int q=0;
	for(int i=0;i<num1;i++){
		q=0;
		for(int j=0;j<num2;j++){
			q+=arr[i][j];
		}
		printf("%d\n",q);
	}
	return 0;
}
