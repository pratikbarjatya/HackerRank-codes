#include "stdio.h"
#include "string.h"
char* printmin(int n){
	if (n==2)
	{
		printf("min(int, int)" ); 
	}
	else{
		printf("min(int, %s",printmin(n-1)); 
	}
}
int main(int argc, char const *argv[])
{
	printmin(3);
	return 0;
}