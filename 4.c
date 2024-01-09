//WAP to find square of each element of 1D array using pointer.
#include<stdio.h>
main(){
	
	int n,i;
	
	printf("Enter Array size:");
	scanf("%d",&n);
	
	int ary[n],square[n];
	for(i=0;i<n;i++){
		printf("Enter a[%d]:",i);
		scanf("%d",&ary[i]);
	}
	
	int *ptr[n];

	printf("Square of elements : ");
	for(i=0;i<n;i++){
		ptr[i]=&ary[i];
		square[i]=(*ptr[i])*(*ptr[i]);
		printf("%d ",square[i]);
	}
}
