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
        int k,count=0; 
        scanf("%d %d",&n,&k);
        int a[n];
        for(int i = 0; i < n; i++){
           scanf("%d",&a[i]);
           if(a[i]<=0){
           	count++;           	
		   }
		   printf("%d\n",count);
        }
    }
    return 0;
}

