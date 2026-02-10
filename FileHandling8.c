/*
	Description :-( File Handling ) Read the Data from File
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // File Control
#include<string.h>

// O_RDONLY		Open for reading
// O_WRONLY		Open for writing
// O_RDWR		Open for Reading and Writing

int main()
{
	char Fname[20];
	int fd = 0; // File Discriptor
	char Data[100];
	
	printf("Enter the file name that you want to open : ");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR); 
	
	if(fd == -1)
	{
		return -1;
	}
	
	read(fd,Data,13);
	
	printf("Data from file is %s",Data);
	
	return 0;
}