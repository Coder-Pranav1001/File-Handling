/*
	Description :-( File Handling ) Write File Dynamicaly
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
	int Length = 0;
	char Data[100];
	
	
	printf("Enter the file name that you want to open : ");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR); 
	
	if(fd == -1)
	{
		return -1;
	}
	
	printf("Enter the Data that you want to write in the file : \n");
	scanf(" %[^'\n']s",Data);
	
	Length = strlen(Data);
	
	//write(where,what,how);
	write(fd,Data,Length);
	
	return 0;
}