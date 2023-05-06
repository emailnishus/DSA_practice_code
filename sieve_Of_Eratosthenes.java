import java.util.Scanner;
class sieve_Of_Eratosthenes{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number :");
        int num = sc.nextInt();
        boolean[] bool = new boolean[num];


        for(int i = 0;i<bool.length;i++)
        {
             bool[i] = true;
        } 

        for(int i = 2; i<Math.sqrt(num) ;i++)
        {
            if(bool[i] = true){
               for(int j = (i*i);j<num;j = j+i){
                bool[j] = false;
               }
            }
        } 
        System.out.println("List of Prime no: "); 
        for(int i = 2;i<bool.length;i++)
        {
            if(bool[i]==true){
                System.out.println(i);
            }
        }
    }
}