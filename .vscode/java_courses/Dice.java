import java.util.Random;

public class Dice {
    public static void main(String[] args) {
        Random number = new Random();
        int x = number.nextInt(6);
        System.out.println("You rolled: " + x);

    }
}
