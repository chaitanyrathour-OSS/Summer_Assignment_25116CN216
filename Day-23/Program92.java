import java.util.*;
public class Program92 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter the String :");
        String str = sc.next();

        char maxChar=' ';
        int max =0;

        for(int i=0; i<str.length(); i++){
           int count = 0;
           for(int j=0; j<str.length(); j++){
              if(str.charAt(i)==str.charAt(j)){
            count++;
           }
        }
        if(count>max){
            max=count;
            maxChar = str.charAt(i);

        }
    }
    System.out.println("Maximum Ocuuring character : "+maxChar);
    System.out.println("Frequency: "+max);

    sc.close();
    }
    
}
