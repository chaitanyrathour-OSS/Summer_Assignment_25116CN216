import java.util.*;
public class Program56{
    public static void main(String[] args){
        int arr[] = {1,1,2,4,5,6,3,2,6,7,8,1,3,9,9};

        System.out.println("Duplicate element are :");
        
        for(int i=0; i<arr.length; i++){
            for(int j=i+1; j<arr.length; j++){
                if(arr[i]==arr[j]){
                    System.out.println(arr[i]);
                }
            }

        }
    }
}
