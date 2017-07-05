#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,count=0; 
    scanf("%d",&n);
    int c[n];
    for(int k = 0; k < n; k++){
       scanf("%d",&c[k]);
    }
    int i=0,j=1;
    while(i<n && j<n){
        
            if(c[i]==c[j]){
            	count++;
            	j++;
			}
        
    }
    printf("%d",count);
    return 0;
}

