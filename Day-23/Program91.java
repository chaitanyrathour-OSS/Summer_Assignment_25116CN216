import java.util.*;
public class Program91 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
           String s1=sc.next();
           String s2=sc.next();


           if(s1.length()==s2.length()){
            char[] a = s1.toCharArray();          
             char[] b = s2.toCharArray();

             Arrays.sort(a);
            Arrays.sort(b);

    
        if( Arrays.equals(a,b)){
            System.out.println("Anagram");
        }else{
            System.out.println(" NOT Anagram");
        }
    }else{
          System.out.println(" NOT Anagram");
    }
    
        
sc.close();
    }
    
}
