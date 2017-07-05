#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int t; 
    scanf("%d %d",&n,&t);
    int w[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&w[i]);
    }
    
    for(int a0 = 0; a0 < t; a0++){
        int i; 
        int j; 
        scanf("%d %d",&i,&j);
        int count1=0,count2=0,count3=0;
        for(int k=i;k<=j;k++){
            if(w[k]==3){
                count1++;
            }
            else if(w[k]==2){
                count2++;
            }
            else if(w[k]==1){
                count3++;
            }
        }
        //printf("\n\n\n%d  %d  %d\n\n\n",count1,count2,count3);
        if(count3>=1){
        	printf("1\n");
		}
		else if(count2>=1){
			printf("2\n");
		}
		else{
			printf("3\n");
		}
    }
    return 0;
}

