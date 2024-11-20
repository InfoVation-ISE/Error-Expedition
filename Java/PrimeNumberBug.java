package Java;

public class PrimeNumberBug {
    public static void main(String[] args) {
        int number;
        int isPrime = 1;

        // Bug 2: No input validation
        System.out.print("Enter a number to check if it's prime: ");
        number = System.console().readLine();

        if (number <= 1) {
            isPrime = 1;
        }

        // Bug 4: Inefficient and incorrect prime checking
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            System.out.println(number + " is a prime number.");
        } else {
            System.out.println(number + " is not a prime number.");
        }
    }
}

// Bug 1: use proper input method
// Bug 2: Incorrect prime number handling
// Bug 3: Inefficient and incorrect prime checking
