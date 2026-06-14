import java.util.*;
public class Program60 {
    public static void main(String[] args){
        int arr[] = {2,0,0,1,2,0,5};
        int n = 0;
    
        for(int i=0; i<arr.length; i++){
        if(arr[i]!=0){
            arr[n] = arr[i];
            n++;
        }
    }
    while(n<arr.length){
        arr[n] = 0;
        n++;
    }
System.out.println("Array after moving zero to end");

    for(int i=0; i<arr.length; i++){
        System.out.print(arr[i]+" ");
    }
    
}
}
