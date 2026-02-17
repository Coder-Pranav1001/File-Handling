/*
	Description :- File Handling (Open File)
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // file cantrol

int main()
{
	char fname[30]; // character array file name
	int fd = 0; // file discriptor
	
	printf("Enter the File Name that you want to open \n");
	scanf("%s",fname); // Accept the String from user
	
	fd = open(fname,O_RDWR); // O_RDWR is Micro and RDWR Read and Write
	if(fd == -1)
	{
		printf("Unable to open the file\n");
	}
	else
	{
		printf("File is Succesfully opened with fd : %d\n",fd);
	}
	
	return 0;
}