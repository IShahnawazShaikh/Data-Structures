import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
class capitalization{
	public static void main(String[] args) {
		new Thread(()->{
	    Scanner sc=new Scanner(System.in);
		ArrayList list=new ArrayList();
		String str=sc.next();
      
	
		String first=""+str.charAt(0);
		first=first.toUpperCase();
		for(int i=1;i<str.length();i++)
			 first=first+""+str.charAt(i);
		System.out.println(first);
		}).start();
	}
}