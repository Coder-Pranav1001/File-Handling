/*
	Description :- Accept folder name from user and Use the filter whilch scan only .txt file and all data of all files from that folder packed in on one file 
	Author :- Pranav R Sonawane
*/
import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class File18
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
	
		try
		{
			System.out.println("Enter Folder Name : ");
			String FolderName = sobj.nextLine();
			
			File fobj = new File(FolderName);
			
			System.out.println("Enter the name of packed file : ");
			String Packfile = sobj.nextLine();
			
			File fpackobj = new File(Packfile);
			fpackobj.createNewFile();
			
			FileOutputStream fout = new FileOutputStream(fpackobj);

			if(fobj.exists())
			{
				File allfiles[] = fobj.listFiles();
				
				System.out.println("Number of Files are : "+allfiles.length);
				
				System.out.println("File names are : ");
				
				byte Buffer[] = new byte[1024];
				int ret = 0;
				
				String name; 
				
				for(int i = 0; i < allfiles.length; i++)
				{
					name = allfiles[i].getName();
					
					if(name.endsWith(".txt")) // Filter 
					{
						System.out.println("File name : "+allfiles[i].getName()+" Size "+allfiles[i].length());
					
						FileInputStream fiobj = new FileInputStream(allfiles[i]);
						
						while((ret = fiobj.read(Buffer)) != -1)
						{
							fout.write(Buffer,0,ret);
						}
					}
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

 