package com.anhannek;

import java.util.Scanner;

public class Unit3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        double result = sumOfTheInverse(n);
        System.out.println(result);
    }

    public static double sumOfTheInverse(int n) {
        double result = 0;
        for (int i = 1; i <= n; i++)
            result += ((double) 1 / i);
        return result;
    }
}
