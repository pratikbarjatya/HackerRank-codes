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
    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    int i=0;
    while(i<n-1)
	{
        if(a[i+2]==0){
            //i=i+2;
            count=count+1;
            i=i+2;
        }
        else{
            //i=i+1;
            count=count+1;
            i++;
        }
	
    }
    printf("%d",count);
    return 0;
}
