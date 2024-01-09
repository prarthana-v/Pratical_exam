#include<stdio.h>
struct house_details{
	int room_quantity;
	int established_year;
	char city[1000];
};
main(){
	int n,i;
	printf("Enter the number of house detail's you want to enter:");
	scanf("%d",&n);
	
	struct house_details house[n];
	for(i=1;i<=n;i++){
		printf("--- House %d's details ---\n");
		
		printf("Quantity of rooms in the house :");
		scanf("%d",&house[i].room_quantity);
		
		printf("Establishment year of the house :");
		scanf("%d",&house[i].established_year);
		
		printf("City of the house :");
		scanf("%s",&house[i].city);
			
	}
	for(i=1;i<=n;i++){
		printf("---Deatils of house %d---\n",i);
		printf("Quantity of rooms in the house is %d\n",house[i].room_quantity);
		printf("Establishment year of the house is %d\n",house[i].established_year);
		printf("City of the house is %s\n",house[i].city);	
	}
}
