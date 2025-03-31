#include <stdio.h>
#define size 5

int main(){
	char arr[size]={};
	printf("input a line with 5 characters\n");
	for(int i=0;i<size;i++){
		scanf("%c",&arr[i]);
	}
	int ans=1;
	for(int i=0;i<size/2+1;i++){
		if(arr[i]!=arr[size-i-1]){
			ans=0;
			break;
		}
	}
	printf("%s\n",ans?"Polindrom":"Not Polindrom");
	return 0;
}
