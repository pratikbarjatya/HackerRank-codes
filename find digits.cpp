#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
    int n; 
    scanf("%d",&n);
    int s,ss;
	
	s=n;
	ss=n;
	//printf("%d",ss);
	int count=0;
	while(s!=0){
		s=s/10;
		count++;
	}
	//printf("%d\n%d",count,n);
	int c=0,p;
	int a[1000];
	while(c<count)	
	{
		a[c]=ss%10;
		ss=ss/10;		
		
		//printf("\n%d\n%d\n",c,a[c]);
		c++;
	}
	//printf("\n%d\n",n);
	
	int count1=0;
	//printf("%d\n%d\n%d\n",a[0],a[1],a[2]);
	for(int i=0;i<count;i++){	
		//printf("\n%d",a[i]);
		if(a[i]!=0 && n%a[i]==0){			
			count1++;
		}
	}
	printf("%d",count1);
	}
   
    return 0;
}

