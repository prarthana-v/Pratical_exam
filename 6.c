#include<stdio.h>
main(){
	
	FILE *data;
	int n;
	char name[111];
	
	fopen("data.txt","w");
	
	if(data==NULL){
		printf("File not opened");
	}
	else{
		printf("Enter the number of employes :");
		scanf("%d",&n);
		printf("Enter name of %d emeploy : ");
		scanf("%s",&name);
		fprintf("data.txt","name %s",name);
	}
}
