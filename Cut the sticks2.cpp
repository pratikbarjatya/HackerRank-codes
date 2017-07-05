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
	int count;    
    while(count!=0){
    	count=0;
    	int min=10000;
		for(int i=0;i<n;i++){
			
			if(a[i]==0){
				a[i]==1800;}
			if(a[i]>0 && a[i]<1800){
				count++;
			}
			if(min>a[i]){
				min=a[i];}
		}
		for(int i=0;i<n;i++){
			a[i]=a[i]-min;
		}
		printf("%d",count);	
	}	
	return 0;
}
