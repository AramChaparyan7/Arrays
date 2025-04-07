#include <stdio.h>
#define size 10

int main(){
	int arr[size]={};
	for(int i=0;i<size;++i){
		scanf("%d",arr+i);
	}
	int num=0;
	for(int i=0;i<size;++i){
		if(arr[i]&1!=arr[i]){
			int temp=arr[i];
			arr[i]=arr[num];
			arr[num]=temp;
			++num;
		}
	}
	for(int i=0;i<size;++i){
		printf("%d ",arr[i]);
	}	
	return 0;
}
