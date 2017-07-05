#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
	char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
	long int n; 
    scanf("%ld",&n);
    long int a=strlen(s);
    long int b,c;
	b=n/a,c=n%a;
	int count1=0;
	for(long i=0;i<a;i++){
		if(s[i]=='a'){
			count1++;
		}
	}
	//printf("%ld\n",count1);
	long count2=0;
	for(long i=0;i<c;i++){
		if(s[i]=='a'){
			count2++;
		}
	}
	printf("%ld\n",b);
	printf("%d\n%d",count1,count2);
	long int k=count1*b+count2;
	printf("%ld",k); 
	/*char* s1 = (char *)malloc(n* sizeof(char));
	long long int k1=0;
	long long k2=0;
	while(k1<n){
		s1[k1]=s[k2];
		k1++;
		k2++;
		if(s[k2]=='\0'){
			k2=0;
		}
	}
	long long k=0,count=0;
	while(s1[k]!='\0'){
		//printf("%c",s1[k-1]);		
		if(s1[k]=='a'){
			count++;
		}
		k++;
	}
	printf("%lld",count);*/
	return 0;	
}
