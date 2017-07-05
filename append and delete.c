#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[])
{
	char a[100],b[100],p[100];
	int k;
	scanf("%s%s",a,b);
	scanf("%d",&k);
	int al=strlen(a);
	int bl=strlen(b);
	if(strcmp(a,b)==-1){
		for (int i = 0; i < 100; ++i)
		{
			p[i]=b[i];
		}
		
	}
	else{
		for (int i = 0; i < 100; ++i)
		{
			p[i]=a[i];
		}
	}
	if(strcmp(a,b)==0){
		if(k>=2*al){
			printf("Yes\n");
		}
		else{
			if(k%2==0){
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}
		}
	}
	else{
		int i=1;
		while(strncmp(a,b,i)==0){
			i++;
		}
		//printf("%d\n",i );
		if(k>=(al+bl)){
			printf("Yes\n");
		}
		else if(k<(al-i+1+bl-i+1)){
			printf("No\n");
		}
		else{
			if((k-(al-i+1+bl-i+1))%2==0){
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}
		}
	}
	return 0;
}