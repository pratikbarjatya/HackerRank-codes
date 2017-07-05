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
    int min,p=0;
    min=a[0];
    for(int i=0;i<n;i++){
    	if(a[i]!=0)
    		p=1;
	}
    
    while (p==1){
	
    for(int i = 0; i < n; i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    count=0;
    //printf("%d",min);
    for(int i = 0; i < n; i++){
    	if(a[i]>0){
    		count++;
    	    a[i]=a[i]-min;
    		
    		//printf("%d\n",a[i]);
    	//	printf("%d\n",count);
		}
	p=0;
	for(i=0;i<n;i++){
    	if(a[i]!=0)
    		p=1;
	}
		
	}printf("%d\n",count);}
//	printf("%d\n",count);
    return 0;
}

