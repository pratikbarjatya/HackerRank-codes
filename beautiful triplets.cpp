#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,count=0;
    scanf("%d%d",&n,&d);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
    	for(int j=i;j<n;j++){
    		if((a[j]-a[i])==d){
    			for(int k=j;k<n;k++){
    				if((a[k]-a[j])==d){
    					count++;
    					printf("(%d,%d,%d)   ",a[i],a[j],a[k]);
					}
				}
			}
		}
	}
	printf("\n%d",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

