/* Binary search with only one test inside the loop and measure the difference
in run-time */

#include<stdio.h>
#define MAX 100	
int binary_search(int x, int v[],int n);
main()
{
	int v[MAX],n,m,p,i;
	printf("Enter the number of elements (n) :  ");
	scanf("%d",&n);
	printf("Enter the sorted numbers : ");
	for(i=0;i<n;++i){
		scanf("%d",&v[i]);
	}
	printf("Enter the search element : ");
	scanf("%d",&m);
	p=binary_search(m,v,n);
	if(p>0)
		printf("%d found at position %d\n",m,p);
	else
		printf("%d not found\n",m);
}

int binary_search(int x, int v[], int n)
{
	int low=0, high, mid;
	high=n-1;
	mid=(low+high)/2;
	while(low <= high && x != v[mid]){
		if (x < v[mid])
			high=mid-1;
		else
			low=mid+1;
		mid=(low+high)/2;
	}
	if (x == v[mid])
		return mid+1;
	else
		return -1;
}
	
