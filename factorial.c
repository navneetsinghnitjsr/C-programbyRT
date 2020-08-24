#include <stdio.h>

int main(){
	int num,i=1;
	scanf("%d", &num);
	for(i=num ; i <1; i--)
	{
	num=num+num*i;
	printf("Input number is %d.\n", num);
	return 0;
	}
}
