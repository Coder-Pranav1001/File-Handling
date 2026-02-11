/*
	Description :- Display number of argument and name of executable file using Command Line 
	Author :- Pranav R Sonawane
*/  

#include<stdio.h>

int main(int argc, char *argv[])
{
	printf("Number of arguments are : %d\n",argc);
	
	printf("Name of executable is : %s\n",argv[0]);
	
	return 0;
}