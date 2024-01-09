//WAP to check if a number entered by user is positive or negative.
#include<stdio.h>
main(){
	int num,flag;
	
	printf("Enter Any Number : ");
	scanf("%d",&num);
	
	if(num>0){
		flag=1;
	}
	else if(num<0){
		flag=-1;
	}
	else{
		flag=0;
	}
	switch(flag){
		case 1:printf("Number is Poistive.");break;
		case -1:printf("Number is Negative.");break;
		case 0:printf("Number is Netural.");break;
	}
	

}
