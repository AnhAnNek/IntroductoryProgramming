package com.anhannek;

import java.util.Scanner;

public class Unit5 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int sum = divisorSum(n);
        System.out.println(sum);
    }

    public static int divisorSum(int n) {
        int sum = 0;
        for (int i = 1; i*i <= n; i++)
            sum += (i + (n / i));
        int sqr = (int) Math.sqrt(n);
        if (sqr * sqr == n)
            sum -= sqr;
        return sum;
    }
}
