/*
	Description :- Create new file
	Author :- Pranav R Sonawane
*/

import java.lang.*;
import java.util.*;
import java.io.*;

class File3
{
	public static void main(String arg[]) throws Exception 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter file name : ");
		String FileName = sobj.nextLine();
		
		File fobj = new File(FileName);
		
		boolean bobj = fobj.createNewFile();
		if(bobj == true)
		{
			System.out.println("File is successfully created");
		}
		else
		{
			System.out.println("Unable to create file");
		}
	}
}
