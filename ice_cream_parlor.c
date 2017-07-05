#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		int a[n];
		for (int p = 0; p < n; ++p)
		{
			scanf("%d",&a[p]);
		}
		for(int s=0;s<n;s++){
			for(int ss=s+1;ss<n;ss++){
				if ((a[s]+a[ss])==m)
				{
					printf("%d %d\n",(s+1),(ss+1) );
					break;
				}
			}
		}
	}
	return 0;
}