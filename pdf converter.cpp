#include<stdio.h>
#include<string.h>
int main(){
	int a[26];
	for(int i=0;i<26;i++){
		scanf("%d",&a[i]);
	}
	char s[100];
	scanf("%s",s);
	char p;
	int ss,k=strlen(s),max=0;
	for(int i=0;i<k;i++){
		p=s[i];
		ss=int(p)-97;
		//printf("%d  ",ss);
		if(a[ss]>max){
			max=a[ss];
		}
	}
	//printf("\n%d",max);
	printf("%d",max*k);
    return 0;
}
