import java.util.Scanner;
import java.util.*;
public class Reg{
public static void main(String...x){
	new Thread(()->{
	List list1=new ArrayList();
	List list2=new ArrayList();
	Scanner sc=new Scanner(System.in);
    int fr;
	int num=sc.nextInt();
	while(num>0){
    String name=sc.next();
        if(list1.contains(name)){
                fr=Collections.frequency(list1,name);
                list1.add(name);
                list1.add(name+""+fr);
                list2.add(name+""+fr);
		}
		else{
           list1.add(name);
           list2.add("OK");
		}
          num--;
		}
   num=0;
   while(num<list2.size()){
   System.out.println(list2.get(num));
        num++;
    }
	  }).start();
   }
}