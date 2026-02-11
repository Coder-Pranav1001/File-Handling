/*
	Description :- Accept file name from user Read that file and count SmallCase Character
	Author :- Pranav R Sonawane
*/  

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 
#include<string.h>

int main()
{
	char Fname[20];
	int fd = 0; 
	int Length = 0;
	char Data[100];
	int Count = 0;
	int iCnt = 0;
	
	printf("Enter the file name that you want to open : ");
	scanf("%s",Fname);
	
	fd = open(Fname, O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open file 'n");
		return -1;
	}
	
	while((Length = read(fd,Data,sizeof(Data))) != 0) 
	{
		for(iCnt = 0; iCnt < Length; iCnt++)
		{
			// Logic
		}
	}
	
	printf("Size of File is %d Bytes\n",Size);
	
	close(fd);
	
	return 0;
}