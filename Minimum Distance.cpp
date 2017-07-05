#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int mod(int i,int j){
	if(i>=j){
		return i-j;
	}
	else{
		return j-i;
	}
}

int main(){
    int n,s; 
    scanf("%d",&n);
    int min=10000;
    int a[n],zz=-1;
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                //printf("(%d,%d)\n",i,j);
                //printf("%d",mod(i,j));
                /*if(j>=i){
                	s=j-i;
                	//printf("%d\n",s);
				}
				else{
					s=i-j;
					//printf("%d\n",s);
				}*/
				if(min>=mod(i,j)){
					min=mod(i,j);
				}            
            	
        	}
    	}
	}
	if(min==10000){			
        min=-1;
	}
    printf("\n%d\n",min);
    return 0;
}

