import java.util.*;
public class Program55 {
    public static void main(String[] args){
        int arr[] = {24,56,12,76,87,9,0};
      
        int largest = arr[0];
        int SecLargest = arr[0];

        for(int i=1; i<arr.length; i++){
            if(arr[i]> largest){
                SecLargest = largest;
                largest=arr[i];
            }
            else if(arr[i] > SecLargest && arr[i] != largest){
                SecLargest = arr[i];
            }
        }
        System.out.println("Second Largest Element= " +SecLargest);
    }
    
}
