import java.util.*;
public class Program54 {
    public static void main(String[] args){
        int arr[] = {1,2,2,2,3,1,1,4,5,6};
        Scanner sc = new Scanner(System.in);
        
        for(int i=0;i<arr.length; i++){
            int count =1;

            for(int j=i+i; j<arr.length; j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            boolean printed = false;
            for(int k=0; k<i; k++){
                if(arr[i]==arr[k]){
                    printed=true;
                    break;
                }
            }
            if(!printed){
                System.out.println(arr[i]+" occurs "+count+" times");
            }
        }
      

    }
    
}
    

