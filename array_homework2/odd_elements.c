#include <stdio.h>
#define size 10

int main(){
	int arr[size]={};
	printf("input 10 numbers\n");
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}
	int ans=0;
	for(int i=0;i<size;++i){
		if(arr[i]%2!=0){
			++ans;
		}
	}
	printf("%d\n",ans);
	return 0;
}
