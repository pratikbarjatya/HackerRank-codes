#include<stdio.h>
#include<math.h>
int reverse(int x){
	int p=x,len;
	while(p!=0){
		p=p/10;
		len++;
	}
	int pp=0,k,s;
	int aa=pow(10,len);
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
	printf("%d\n",pow(10,2));
	printf("%d",reverse(25));
	return 0;
}

