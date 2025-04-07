#include <stdio.h>
#define size 10

int main(){
	char arr[size]={};
	printf("input a line with 10 characters\n");
	for(int i=0;i<size;++i){
		scanf(" %c",arr+i);
		arr[i]=arr[i]&~32;
	}
	for(int i=0;i<size;++i){
		printf("%c",arr[i]);
	}
	return 0;
}
