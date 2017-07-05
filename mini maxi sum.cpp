#include<stdio.h>
int main(){
	long long a[5],t;
	for(int i=0;i<5;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<5;i++){
		for(int j=i;j<5;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("%lld ",(a[0]+a[1]+a[2]+a[3]));
	printf("%lld",(a[1]+a[2]+a[3]+a[4]));
	return 0;
}
