#include<stdio.h>
#include<math.h>
int reverse(int x){
	int p=x,len=0;
	while(p!=0){
		p=p/10;
		len++;
		
	}
	int pp=0,k,s;
	double aa=pow(10,len-1);
	while(x!=0){
		k=x%10;
		s=k*aa;
		pp=pp+s;
		aa=aa/10;
		x=x/10;		
	}
	return pp;
}
int main(){
	int c,i,j,k,count=0;
	scanf("%d%d%d",&i,&j,&k);
	for(c=i;c<=j;c++){
		if((c-reverse(c))%k==0){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
