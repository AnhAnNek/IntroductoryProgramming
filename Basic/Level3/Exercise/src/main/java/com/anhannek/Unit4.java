package com.anhannek;

import java.util.Scanner;

public class Unit4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long result = factorialLoop(n);
        System.out.println(result);

        long result1 = factorialRecursive(n);
        System.out.println(result1);
    }

    public static long factorialLoop(int n) {
        long result = 1;
        for (int i = 1; i <= n; i++)
            result *= i;
        return result;
    }
    public static long factorialRecursive(int n) {
        if (n == 0 || n == 1)
            return 1;
        return n * factorialRecursive(n - 1);
    }
}
