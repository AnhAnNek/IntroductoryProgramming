package com.anhannek;

import java.util.Scanner;

public class Unit6 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int count = countDivisor(n);
        System.out.println(count);
    }

    public static int countDivisor(int n) {
        int count = 0;
        for (int i = 1; i * i <= n; i++)
            if (n % i == 0)
                count += 2;
        int sqr = (int) Math.sqrt(n);
        if (sqr * sqr == n)
            count--;
        return count;
    }
}
