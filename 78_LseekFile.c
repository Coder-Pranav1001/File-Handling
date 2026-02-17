/*
	Description :- File Handling (Lseek File)
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // file cantrol
 
int main()
{
	char fname[30]; // character array file name
	int fd = 0, ret = 0;
	char Data[11];
	
	printf("Enter the File Name that you want to open \n");
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
	
	lseek(fd,4,0);
	// first parameter = File Descriptor 
	// Second parameter = Displacement
	// Third parameter = From where (0 = Start of file, 1 = Current position, 2 = End of file)
	// lseek(fd,-7,2);
	
	read(fd,Data,6);
	
	write(1,Data,6);
	
	close(fd);
	return 0;
}