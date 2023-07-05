import java.util.*;
/**
 * longest_sequence_in_bit
 */
public class longest_sequence_in_bit {

    public static int flipbits(int a)
    {
        int curr = 0;
        int prev = 0;
        int max = 0;

        while (a!=0) {
            if((a & 1) == 1){
                curr++;
            }

            else if((a&1) == 0){
                prev = (a&2) == 0 ? 0 : curr;
                curr = 0;
            }

            max = Math.max(prev + curr, max);
            a>>=1;
            
        }
        return max+1;
    }
    
    public static void main(String[] args) {

        int n = 222;
        System.out.println(flipbits(n));
        
    }
}