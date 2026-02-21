/*
	Description :- Create new file
	Author :- Pranav R Sonawane
*/

import java.lang.*;
import java.util.*;
import java.io.*;

class File2
{
	public static void main(String arg[]) throws Exception 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter file name : ");
		String FileName = sobj.nextLine();
		
		File fobj = new File(FileName);
		
		fobj.createNewFile();	
	}
}
