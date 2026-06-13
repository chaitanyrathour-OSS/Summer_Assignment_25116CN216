import java.util.*;
public class Program53{
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.print("enter the element to search :");

    int arr[] = {10,20,30,40,50,60};
    int key = sc.nextInt();
    
    int found = 0;
    for(int i=0; i<arr.length; i++){
        if(arr[i]==key){
            System.out.println("element found at position " +(i+1));
            found=1;
            break;
        }
    }
    if(found==0){
        System.out.println("element not found");
    }

    }
}