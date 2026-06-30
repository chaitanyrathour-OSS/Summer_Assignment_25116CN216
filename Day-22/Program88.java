import java.util.*;
public class Program88 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the String :");
        String str = sc.nextLine();

        str = str.replace(" ","");
        System.out.println("String after removing Spaces:" +str);

        sc.close();
    }
    
}
