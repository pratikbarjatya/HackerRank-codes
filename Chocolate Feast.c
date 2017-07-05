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
        int c; 
        int m,no; 
        scanf("%d %d %d",&n,&c,&m);
        //if (n%c==0)
        //{
    	no=n/c;
    	int kk=no;
    	while(kk>=m){
    		no=no+1;
    		kk=kk-m+1;
    	}
        //}
        //else{

        	//}
        printf("%d\n",no );
    }
   
    return 0;
}
