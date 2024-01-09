//que-7 print the follwing loop
/*
100
81 81
64 64 64
49 49 49 49 
36 36 36 36 36 
*/
#include<stdio.h>
main(){
	int k=10;
	int i,j;
		
	for(i=10;i>=6;i--){
		for(j=i;j<=10;j++){
			printf("%d ",i*i);
		}
		printf("\n");
	}
}
