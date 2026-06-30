import java.util.*;
public class Program86 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Sentence :");
        String str = sc.nextLine().trim();

        if(str.isEmpty()){
            System.out.println("Number of words=0");
        }
        else{
            String[] words = str.split("\\s+");
            System.out.println("Number of words= " +words.length);
        }
        sc.close();

    }
    
}
