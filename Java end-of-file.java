import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class MyProgram {

    public static void main(String[] args) {
        
       Scanner stdin = new Scanner(System.in);
        int i = 1;
        while (stdin.hasNextLine()) {
            String str = stdin.nextLine();
            if(str.isEmpty())
                break;
            System.out.println(i + " " +  str);
            i++;
        }
        stdin.close();
    }
}