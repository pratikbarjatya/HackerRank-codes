#include<stdio.h>
int main(){
	long long int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		long long n,m,s,k;
		scanf("%lld%lld%lld",&n,&m,&s);
		k=m+s-1;
		if(k%n==0){
			printf("%lld",n);
		}
		else{
			printf("%lld\n",(k%n));
		}		
	}
	return 0;
}
