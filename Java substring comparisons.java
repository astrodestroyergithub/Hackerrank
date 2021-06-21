import java.util.Scanner;

public class MyProgram {

    public static String getSmallestAndLargest(String s, int k) {

        String smallest = "";
        String largest = "";

        int min=123;
        int storeindex=0;
        for(int i=0;i<=s.length()-k;i++)
        {
            int n=s.charAt(i);
            if(n<min) {
                min=n;
                storeindex=i;
            }
        }
        smallest = s.substring(storeindex,storeindex+k);
        int storeindex2=0;
        int max=64;
        for(int i=0;i<=s.length()-k;i++) {
            int n=s.charAt(i);
            if(n>max) {
                max=n;
                storeindex2=i;
            }
        }
        largest = s.substring(storeindex2,storeindex2+k);
        
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'
        
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}