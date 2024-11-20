package Java;

public class FibonacciBug {
    public static void main(String[] args) {
        int[] fibonacci = new int[5];

        fibonacci[0] = 1;
        fibonacci[1] = 1;

        for (int i = 0; i < 5; i++) {
            fibonacci[i + 2] = fibonacci[i] + fibonacci[i + 1];
        }

        System.out.print("Fibonacci Sequence: ");
        for (int i = 0; i <= 5; i++) {
            System.out.print(fibonacci[i] + " ");
        }
        System.out.println();
    }
}
// Bug 1: Incorrect array size
// Bug 2: Incorrect initialization
// Bug 3: Inefficient and incorrect sequence generation
// Bug 4: Potential out-of-bounds access
