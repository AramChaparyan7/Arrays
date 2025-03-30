#include <stdio.h>

int main(){
	const int size=100;
	int arr[size];
	int count=0;
	printf("how many numbers?\n");
	scanf("%d",&count);
	printf("input your numbers\n");
	for(int i=0;i<count;++i){
		scanf("%d",&arr[i]);
	}
	int minindex=arr[0];
	for(int i=1;i<count;++i){
		if(minindex>arr[i]){
			minindex=i;
		}
	}
	printf("answer is %d\n",minindex);
	return 0;
}
