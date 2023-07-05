import java.util.*;

 /* Euclid_algorithm
 */
public class Euclid_algorithm {

    public static void main(String[] args) {
        int a = 14,b = 7,c = 1;
        while (a!=b) {
            if(a>b){
                c = a-b;
                a = c;
            }
            else{
                c = b-a;
                b = c;
            }
            
        }
        System.out.println("Ans is "+a);
    }
}

