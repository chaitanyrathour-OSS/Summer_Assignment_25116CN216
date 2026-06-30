import java.util.*;
public class Program89 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string :");
        String str = sc.next();

        for(int i=0; i<str.length(); i++){
            if(str.indexOf(str.charAt(i))==str.lastIndexOf(str.charAt(i))){
                System.out.println("First Non Repeating Character:" +str.charAt(i));
                break;
            }
        }
    }
    
}
