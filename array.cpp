#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
       
    }
    for(int i=0;i<n;i++){
    	a[i]=a[n-i-1];
	}
    for(int i=0;i<n;i++){
    	printf("%d",a[i]);
	}
    return 0;
}

