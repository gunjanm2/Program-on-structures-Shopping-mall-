#include<stdio.h>
struct mall
{
	
	char product[50];
	long id;
	float cost;
	int discount;
}m;
int main()
{
	printf("Enter the product: \n");
	scanf("%s",m.product);
	printf("Enter the ID of the entered product: \n");
	scanf("%ld",&m.id);
	printf("Enter the cost of the entered product: \n");
	scanf("%f",&m.cost);
	printf("Enter the discount on the entered product: \n");
	scanf("%d",&m.discount);
	
	printf("\n***Product Detail***\n");
	printf("The product: \n%s",m.product);
	printf("\nThe ID of the entered product: \n%ld",m.id);
	printf("\nThe cost of the entered product: \n%f",m.cost);
	printf("\nThe discount on the entered product: \n%d %",m.discount);
}
