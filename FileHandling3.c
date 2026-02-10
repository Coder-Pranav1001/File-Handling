/*
	Description :-( File Handling ) Open File 
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // File Control

// O_RDONLY		Open for reading
// O_WRONLY		Open for writing
// O_RDWR		Open for Reading and Writing

int main()
{
	char Fname[20];
	int fd = 0; // File Discriptor
	
	printf("Enter the file name that you want to open : ");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR); 
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("File is succesfully opened with FD %d\n",fd);
	}
	
	return 0;
}