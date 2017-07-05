#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int m; 
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    int b[m];
    for(int i = 0; i < m; i++){
       scanf("%d",&b[i]);
    }
    int k=a[n]+1,count=0;
    while(k<b[0]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(k%a[i]==0 && b[i]%k==0){
                count++;
            }
        }
    }
    k++;
    }
    printf("%d",count);
    return 0;
}

