import java.util.Scanner;

public class hello {

      public static void main(String[] args) {
        int a;
         
  System.out.println("Enter the number of table:");
  Scanner obj=new Scanner(System.in);
  a=obj.nextInt();
int mul;
 
  for(int i=1;i<=10;i++){
        
   mul= a*i;
     System.out.println(a+"*"+i+"="+mul);
      }
  
}

}
