/*
	Description :- Accept folder name from user and Display the list of all Files, Name and Size from that folder
	Author :- Pranav R Sonawane
*/
import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class File15
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
				
				byte Buffer[] = new byte[1024];
				int ret = 0;
				
				System.out.println("------------------------------------------------");
				for(int i = 0; i < allfiles.length; i++)
				{
					System.out.println("File name : "+allfiles[i].getName()+" Size "+allfiles[i].length());
					
					FileInputStream fiobj = new FileInputStream(allfiles[i]);
					
					while((ret = fiobj.read(Buffer)) != -1)
					{
						String str = new String(Buffer,StandardCharsets.UTF_8);
						System.out.println(str);
					}
					System.out.println("------------------------------------------------");
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

 