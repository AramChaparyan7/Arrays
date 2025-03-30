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
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<count;++i){
		if(min>arr[i]){
			min=arr[i];
		}else if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("answer is %d\n",min+max);
	return 0;
}
