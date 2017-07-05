#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,j; 
    scanf("%d",&n);
    int a[n][n];
    int sum1=0,sum2=0;
    for(int i = 0; i < n; i++){
       for(j = 0; j < n; j++){
          
          scanf("%d",&a[i][j]);
          if(i==j)
          {
          	sum1=sum1+a[j][j];
		  }
       }	
	   	sum2=sum2+a[i][n-i-1];
    }
    printf("%d %d",sum1,sum2);
    return 0;
}
