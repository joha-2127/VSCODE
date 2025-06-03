import java.util.Scanner;
 class Main {

    public static int cal(int a,int b){
        int sum=a+b;
        
        return sum;
    }
    public static void main(String[] args) {
        
        Scanner obj = new Scanner(System.in);
System.out.println("Enter the numbers:");
        int a=obj.nextInt();
        int b=obj.nextInt();
        int sum= cal(a,b);
        System.out.println(sum);
        obj.close();
    }
}
