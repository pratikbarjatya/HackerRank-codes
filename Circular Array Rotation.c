#include<stdio.h>
int main(){
	int i,j,n,k,q;
	scanf("%d%d%d",&n,&k,&q);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[n];
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	i=0;
	//int kk;
	int p=k%n;
	//while(i<p){
	//	kk=a[n-1];
		for(j=n-1;j>=0;j--){						
			if(j-p>=0){
				a[j]=b[j-p];
			}
			else{
				a[j]=b[n+j-p];
				}									
		}
		//a[0]=kk;
		//i++;
	//}
	int aa;
	for(aa= 0; aa < q; aa++){
        int m;
        scanf("%d",&m);
        printf("%d\n",a[m]);
    }
    /*for(aa= 0; aa < n; aa++){
        printf("%d ",a[aa]);
    }*/
	return 0;
}
