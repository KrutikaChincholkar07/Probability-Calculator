import java.util.Scanner;

public class Probability {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of favorable outcomes: ");
        float favorable = sc.nextFloat();

        System.out.print("Enter total number of outcomes: ");
        float total = sc.nextFloat();

        float probability = favorable / total;

        System.out.println("Probability = " + probability);

        sc.close();
    }
}
