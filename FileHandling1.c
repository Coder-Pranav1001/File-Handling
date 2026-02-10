/*
	Description :-( File Handling ) Create File 
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // File Control

int main()
{
	char Fname[20];
	int fd = 0; // File Discriptor
	
	printf("Enter the file name that you want to create : ");
	scanf("%s",Fname);
	
	fd = creat(Fname,0777); // System Call to creat
	
	if(fd == -1)
	{
		printf("Unable to create file\n");
	}
	else
	{
		printf("File is succesfully created with FD %d\n",fd);
	}
	
	return 0;
}