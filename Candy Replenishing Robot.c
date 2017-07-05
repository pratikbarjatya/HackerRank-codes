#include "stdio.h"
int main()
{
	int n,t;
	scanf("%d%d",&n,&t);
	int a[t];
	for (int i = 0; i < t; ++i)
	{
		scanf("%d",&a[i]);
	}
	int nn=n;
	int s=0;
	int i=1,j=0;
	while(i<t){
		nn=nn-a[j];
		if (nn<5)
		{
			s=s+(n-nn);
			nn=n;
		}
		j++;
		i++;
	}
	printf("%d\n",s);
	return 0;
}