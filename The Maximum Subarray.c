#include "stdio.h"
int main()
{
	int i,j,n,t;
	scanf("%d",&t);
	for (int pp = 0; pp < t; ++pp)
	{

		scanf("%d",&n);
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		i=0,j=0;
		int imax=i,jmax=j;
		int s=0,m=0,mm=0,max=-10001;
		while(j<n){
			if (a[j]>0)
			{
				mm=mm+a[j];
			}
			if (a[j]>max)
			{
				max=a[j];
			}
			s=s+a[j];
			if(s>m){
				m=s;
				imax=i+1;
				jmax=j;
			}
			if(s<0){
				s=0;
				i=j;
			}
			j++;
		}
		if (s==0)
		{
			m=max;
		}
		if (mm==0)
		{
			mm=max;
		}
		printf("%d %d\n",m,mm);
	}
	return 0;
}
