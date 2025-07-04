import java.util.Scanner;
 class Main {

    public static int cal(int a,int b){
        int mul=a*b;
        
        return mul;
    }
    public static void main(String[] args) {
        
        Scanner obj = new Scanner(System.in);
System.out.println("Enter the numbers:");
        int a=obj.nextInt();
        int b=obj.nextInt();
        int mul= cal(a,b);
        System.out.println(mul);
        
    }
}
