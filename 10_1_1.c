#include<stdio.h>
/*

Write a Program to find the cube of a given number using UDF.

For example,

Input:
Enter any number: 5

Output:
Cube is: 125

*/
int cube(int n)
{
	int c;
	c = n*n*n;
	
	return c;
	
} 

void main()
{
	int n;
	printf("Enter any number = ");
	scanf("%d",&n);
	
	printf("Cube is = %d",cube(n));
	
}