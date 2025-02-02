public class Main {
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3, 4};
        System.out.println("Sum: " + sum(numbers));
    }

    public static int sum(int[] arr) {
        int total = 0;
        for (int num : arr) {
            total += num;
        }
        return total;
    }
}  // Garbage collection automatically manages memory
