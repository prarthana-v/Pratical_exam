//WAP to program to find smallest element in a 1D array.
#include<stdio.h>
main(){
	
	int n,small,i;
	printf("Enter the array size:");
	scanf("%d",&n);
	
	int array[n];
	for(i=0;i<n;i++){
		printf("Enter a[%d]:",i);
		scanf("%d",&array[i]);
	}
	small=array[0];
	for(i=0;i<n;i++){
		if(small>array[i]){
			small=array[i];
		}
	}
	printf("Smallest elememt => %d",small);
}
