package Java;

public class MultiplicationTableBug {
    public static void printMultiplicationTable(int n) {
        for (int i = 0; i < 5; i++) {
            System.out.println(n + " x " + i + " = " + n);
        }
    }

    public static void main(String[] args) {
        int number = 5;
        printMultiplicationTable(number);
    }
}
// Bug 1: Incorrect loop range
// Bug 2: Incorrect multiplication
// Bug 3: Hardcoded single number