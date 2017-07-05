#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=0;
    }
    int i=0;
    while(i<n){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        b[i]=count;
        i++;
    }
    int max=0,count2=0;
    for(int i=0;i<n;i++){
    	//printf("%d  ",b[i]);
    	if(b[i]>max){
    		max=b[i];
		}
	}
    for(int i=0;i<n;i++){
        if(b[i]!=max){
            count2++;
        }
    }
    if(count2==0 && max!=n){
    	printf("%d",n-1);
	}
	else if(count2==0 && max==n){
		printf("%d",count2);
	}
	else{
		printf("%d",n-max);
	}    
    return 0;
}

