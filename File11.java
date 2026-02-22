/*
	Description :- Accept folder name from user and that folder is exists or not
	Author :- Pranav R Sonawane
*/
import java.io.*;
import java.util.*;

class File11
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