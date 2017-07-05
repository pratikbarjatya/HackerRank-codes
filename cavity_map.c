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
    char* a[n];
    for(int i = 0; i < n; i++){
       a[i] = (char *)malloc(1024 * sizeof(char));
       scanf("%s",a[i]);
    }
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 1; j < n-1; ++j)
    	{
    		if (a[i][j-1]<a[i][j] && a[i][j]>a[i][j+1] && a[i][j]>a[i+1][j] && a[i][j]>a[i-1][j])
    		{
    			a[i][j]='X';
    		}
    	}
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%s\n",a[i] );
    }
    return 0;
}
