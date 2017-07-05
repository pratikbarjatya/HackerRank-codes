#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int t,i,j,k;
    float p,q;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int a,b;
        int count=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++){
            p=sqrt(j);
            k=p;
            if(k==p){
                count++;
            }
        }
        printf("%d\n",count);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

