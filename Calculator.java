import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        float num1, num2, result;
        char operator;

        System.out.println("Welcome to this Simple Calculator App with Java for Beginners.");
        Scanner scanner = new Scanner(System.in);
        System.out.print("Please enter the first Number: ");
        num1 = scanner.nextFloat();

        System.out.print("Please enter the second Number: ");
        num2 = scanner.nextFloat();

        System.out.print("Please enter the operation (+, *, -, /): ");
        operator = scanner.next().charAt(0);

        switch (operator) {
            case '+':
                result = num1 + num2;
                System.out.println("Your result is: " + result);
                break;
            case '-':
                result = num1 - num2;
                System.out.println("Your result is: " + result);
                break;
            case '*':
                result = num1 * num2;
                System.out.println("Your result is: " + result);
                break;
            case '/':
                result = num1 / num2;
                System.out.println("Your result is: " + result);
                break;
            default:
                System.out.println("Invalid arguments");
                break;
        }
    }
}
