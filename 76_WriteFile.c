/*
	Description :- File Handling (Write File)
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // file cantrol

int main()
{
	char fname[30]; // character array file name
	int fd = 0, ret = 0;
	char Data[11] = "Marvellous";
	
	printf("Enter the File Name that you want to write \n");
	scanf("%s",fname); // Accept the String from user
	
	fd = open(fname,O_RDWR); // O_RDWR is Micro and RDWR Read and Write
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1; // if enter if block code is tarminated
	}
	else
	{
		printf("File is Succesfully opened with fd : %d\n",fd);
	}
	
	ret = write(fd,Data,10);
	if(ret == 0)
	{
		printf("Unable to write in file\n");
	}
	return 0;
}