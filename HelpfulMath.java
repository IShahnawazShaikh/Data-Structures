import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
class HelpfulMath{
	public static void main(String[] args) {
		new Thread(()->{
	    Scanner sc=new Scanner(System.in);
		ArrayList list=new ArrayList();
		String str=sc.next();
        String newStr="";
		for(int i=(str.length())-1;i>=0;i--){
			  if(str.charAt(i)!='+')
			  list.add(str.charAt(i));
		}
		Collections.sort(list);
		newStr=""+list.get(0);
		for(int i=1;i<list.size();i++)
			 newStr=newStr+"+"+list.get(i);
		System.out.println(newStr);
		}).start();
	}
}