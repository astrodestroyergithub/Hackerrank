import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class MyProgram {

    static void toBinary(int decimal){    
        int binary[] = new int[40];    
        int index = 0;    
        while(decimal > 0){    
            binary[index++] = decimal%2;    
            decimal = decimal/2;    
        } 
        int max=0; 
        for(int j = index-1;j >= 0;j--){
            int max2=0;
            for(int i = j;i >= 0;i--){    
                if(binary[i]==1){
                    max2++;
                } 
                if(binary[i]==0)
                    break;   
            }
            if(max2>max)
                max=max2;
        }  
        System.out.println(max);  
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        toBinary(n);
        scanner.close();
    }
}
