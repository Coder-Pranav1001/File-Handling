/*
	Description :- Accept file name from user
	Author :- Pranav R Sonawane
*/

import java.lang.*;
import java.util.*;

class File1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter file name : ");
		String FileName = sobj.nextLine();
		
		System.out.println("File name is : "+FileName);	
	}
}
