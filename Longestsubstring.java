import java.util.*;
public class Longestsubstring {
  public static void main(String args[])
  {
    String current="",max="";
    String str;
    Scanner sc=new Scanner(System.in);
    str=sc.nextLine();
    sc.close();
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str.charAt(i)==str.charAt(j))
            {
                current=str.substring(i,j);
                break;
            }
        }
        if(max.length()<current.length())
        max=current;
    }
    System.out.println(max);
  }  
}