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
        long b; 
        long w; 
        scanf("%ld %ld",&b,&w);
        long x; 
        long y; 
        long z; 
        scanf("%ld %ld %ld",&x,&y,&z);
    	long long r1=b*x+w*y;
    	long long r2=(b+w)*x+w*z;
    	long long r3=(b+w)*y+b*z;
    	if(r1<=r2 && r1<=r3){
    		printf("\n%lld",r1);
		}
		else if(r2<=r1 && r2<=r3){
    		printf("\n%lld",r2);
		}
		else{
    		printf("\n%lld",r3);
		}
	}
        return 0;
}

