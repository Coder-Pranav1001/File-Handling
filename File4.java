/*
	Description :- Accept file name from user and if file is there display size of that file
	Author :- Pranav R Sonawane
*/

import java.lang.*;
import java.util.*;
import java.io.*;

class File4
{
	public static void main(String arg[]) throws Exception 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter file name : ");
		String FileName = sobj.nextLine();
		
		File fobj = new File(FileName);
		
		if(fobj.exists())
		{
			System.out.println("File size if : "+fobj.length());
		}
		else
		{
			System.out.println("There is no such file");
		}
	} 
}
