#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    int x,v;
    x=x1-x2;
    v=v1-v2;
    if(x2>x1 && v2>=v1){
        printf("NO");
    }
    else if(x1>x2 && v1>=v2){
        printf("NO\n");
    }
    else if(x1%2==0 && v1%2==0 && x2%2==1 && v2%2==1){
        printf("NO\n");          
    }
    else if(x1>x2 || x2>x1 && v1==v2){
        printf("NO\n");
    }
    else if(x%v==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    
    return 0;
}
