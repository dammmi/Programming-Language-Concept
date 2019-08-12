import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
      
      Scanner input = new Scanner (System.in);
      
      System.out.print("Eneter any value with decimal point: ");
      
      double num = input.nextDouble();
      
      System.out.print("Enter the real part: ");
      int i = input.nextInt();
      
      System.out.print("Enter the complex part: ");
      int j = input.nextInt();
      
      System.out.print("Enter the real part: ");
      int x = input. nextInt();
      
      System.out.print("Enter the complex part: ");
      int y = input.nextInt();
      
      
    Complex a = new Complex(i, j);
    Complex b = new Complex(x, y);

    System.out.printf("a = %s\n", a);
    System.out.printf("b = %s\n", b);

    // operators
    System.out.printf("a + b = %s\n", a.add(b));
    System.out.printf("a - b = %s\n", a.subtract(b));
    System.out.printf("a * b = %s\n", a.multiply(b));
    System.out.printf("a / b = %s\n", a.divide(b));

    System.out.printf("a + num = %s\n", a.add(num));
    System.out.printf("a - num = %s\n", a.subtract(num));
    System.out.printf("a * num = %s\n", a.multiply(num));
    System.out.printf("a / num = %s\n", a.divide(2));


  }
}
