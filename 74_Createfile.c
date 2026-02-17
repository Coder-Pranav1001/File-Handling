/*
	Description :- File Handling (Create File)
	Author :- Pranav R Sonawane
*/ 
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // file cantrol

int main()
{ 
	char fname[30]; // character array file name
	int fd = 0; // file discriptor
	
	printf("Enter the file name that you want to create\n");
	scanf("%s",fname); // Accept the String from user
	
	fd = creat(fname,0777);
	if(fd == -1)
	{ 
		printf("Unable to create file\n");
	}
	else
	{
		printf("File is Succesfully Created with fd : %d\n",fd);
	}
 	
	return 0;
}