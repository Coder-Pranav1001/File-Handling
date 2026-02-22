/*
	Description :- Accept folder name from user and Display the list of all Files, Name and Size from that folder
	Author :- Pranav R Sonawane
*/
import java.io.*;
import java.util.*;

class File14
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
	
		try
		{
			System.out.println("Enter Folder Name : ");
			String FolderName = sobj.nextLine();
			
			File fobj = new File(FolderName);
			
			if(fobj.exists())
			{
				File allfiles[] = fobj.listFiles();
				
				System.out.println("Number of Files are : "+allfiles.length);
				
				System.out.println("File names are : ");
				for(int i = 0; i < allfiles.length; i++)
				{
					System.out.println("File name : "+allfiles[i].getName()+" Size "+allfiles[i].length());
				}
			}
			else
			{
				System.out.println("There is no such folder...");
			}
		}
		catch(Exception obj)
		{
			System.out.println("Exception occured : "+obj);
		}
	}
}