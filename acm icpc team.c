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
    char* topic[n];
    char* topic1[n*(n-1)/2];
    for(int i = 0; i < n; i++){
       topic[i] = (char *)malloc(1024 * sizeof(char));
       scanf("%s",topic[i]);
    }
    int maxx=0;
    int p=0,k;
    for (int i = 0; i < n; ++i)
    {
    	for (int j = i+1; j < n; ++j)
    	{
            int count=0;
            topic1[p] = (char *)malloc(1024 * sizeof(char));
    		for (k = 0; k < m; ++k)
    		{
    			topic1[p][k]=topic[i][k] | topic[j][k];
                if (topic1[p][k]=='1')
                {
                    count++;
                }
    		}
            if (count>maxx)
            {
                maxx=count;
            }
    		p++;
            
    	}    	
    }
    int ss=0;
    for (int i = 0; i < p; ++i)
    {
        int count=0;
        for (int j = 0; j < m; ++j)
        {
            if (topic1[i][j]=='1')
            {
                count++;
            }
        }
        if (count==maxx)
        {
            ss++;
        }
    }
    printf("%d\n%d\n",maxx,ss );
    return 0;
}