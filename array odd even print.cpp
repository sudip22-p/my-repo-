#include<stdio.h>  
int cube(int a);
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	printf("the cube of the number is:%d",cube(num));
}
int cube(int a)
{
	return a*a*a;
}



#include<stdio.h>  
int check(int a);
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
    check(num);
}
int check(int a)
{
	if (a%2==0)
	{
		  printf("the entered number is even");
	}
	else 
	{
		  printf("the entered number is odd");
	}
}
