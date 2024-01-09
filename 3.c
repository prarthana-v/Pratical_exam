//WAP to define a function to reverse a 3 digit number
#include<stdio.h>

main(){
	int i,n,ld,fd;
	printf("Enter three digit number:");
	scanf("%d",&n);
	
	ld=n%10;
	printf("%d",ld);
	
	while(n>10){
		n=n/10;		
	}
	printf("%d",n);
	
	
}
