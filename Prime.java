/**this program will compute all the prime numbers
 * up to n. it also will erase every multiple of 2 and 3
 */
import java.util.Scanner;
public class Prime {
    public static void main(String[] args) {
        //ceiling for the prime numbers
        int n;
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the prime number ceiling: ");
        n = in.nextInt();
        in.close();

        //in it our numbers array, where true denotes promality
        boolean[] isPrime = new boolean[n];
        isPrime[0] = false;
        //isPrime[0] = false;
        for(int  c = 1; c < n; c++) {
            isPrime[c] = true;
        }

        //check every number >= 2 for primality
        for(int i = 2; i<= n; i++) {

            //i is prime if hasnt been "crossed off" yet
            if(isPrime[i-1]) {
                //print out prime number
                System.out.println(i);

                //"cross off" all the subsequent multiples of i
                for(int j = i*i; j <= n; j += i) {
                    isPrime[j-1] = false;
                }
            }
        }
    }
}
