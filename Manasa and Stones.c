#include "stdio.h"
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
		int n,a,b;
		scanf("%d%d%d",&n,&a,&b);
		int tt,k=1,s=0;
		if(a>b){
            tt=a;
            a=b;
            b=tt;
        }
		while(k<n){
			s=s+a;
			k++;
		}
		if (a==b)
		{
			printf("%d",s );
		}
		else{
			k=0;
			while(k<n){
				printf("%d ",s );
				s=s-a+b;
				k++;
			}
		}
		
		puts("");
	}
	return 0;
}