package com.anhannek;

import java.util.Scanner;

public class Unit2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long result = sumOfSquares(n);
        System.out.println(result);
    }

    public static long sumOfSquares(int n) {
        if (n == 1)
            return 1;
        long ans = 1;
        for (int i = 2; i<=n; i++)
            ans += (i * i);
        return ans;
    }
}
