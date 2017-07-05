#include "stdio.h"
#include "stdlib.h"

void swap(int a[],int i, int j) {
   int temp = a[i];
   a[i] = a[j];
   a[j] = temp;
}

int partition(int a[], int i, int j, int p) {
   int l = i;
   int r = j;

   while(l<=r) {
      while(a[l] < p) {
         l++;
      }
		
      while(r > 0 && a[r] >=p) {
         r--;
      }

      if(l >= r) {
         break;
      } else {
         swap(a,l,r);
      }
   }
   swap(a,l,j);
   return l;
}

void quickSort(int a[],int i, int j) {
   if(j>i){
      int p = a[j];
      int k = partition(a,i,j,p);
      quickSort(a,i,k-1);
      quickSort(a,k+1,j);
   }        
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	int b[m];
	for (int i = 0; i < m; ++i)
	{
		scanf("%d",&b[i]);
	}
	quickSort(a,0,n-1);
	quickSort(b,0,m-1);
	int j=0;
	int i=0;
	while(i<n)
	{
		if (a[i]==b[j])
		{
			i++;
			j++;
		}
		else{
			printf("%d ",b[j] );
			j++;
		}
	}
	for (int i = j; i < m; ++i)
	{
		printf("%d ",b[i]);
	}
	return 0;
}