/*
Designer: Carlos Rodriguez Calvo
Date: 16.03.2019
----------------------------------------------------------------------------------------------------------------------
Description:
	-CPU Core i5

-----------------------------------------------------------------------------------------------------------------------
*/
#include "pch.h"
#include <iostream>
#include<time.h>


int main()
{
	//
	int *dev_number;
	long int *gpur; 
	//
	clock_t start, end;
	double total_time;
	//
	int n, i;
	unsigned long long factorial = 1;
	//
	printf("Enter an number: ");
	scanf_s("%d", &n);
	//
	start = clock();
	if (n < 0)
		printf("No negative allowed");
	else{
		for (i = 1; i <= n; ++i){
			factorial *= i;              
		}printf("Factorial of %d = %llu", n, factorial);
	}
	//
	end = clock();
	total_time = ((double)(end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
	//
	return 0;
}


