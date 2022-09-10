package com.anhannek;

import java.util.Scanner;

public class Unit7 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int sum = sumOfDigits(n);
        System.out.println(sum);
    }

    public static int sumOfDigits(int n) {
        int sum = 0;
        int temp = n;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        return sum;
    }
}
