#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("\nEnter the value of b : ");
	scanf("%d",&b);
	int sum = a + b;
	printf("%i",++sum);
	return 0;
}
