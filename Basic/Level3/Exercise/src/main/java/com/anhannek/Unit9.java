package com.anhannek;

public class Unit9 {
    public static void main(String[] args) {
        int a = 12, b = 18;
        int result = gcd(a, b);
        System.out.println(result);

        int result1 = lcm(a, b);
        System.out.println(result1);
    }

    public static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static int lcm(int a, int b) {
        return (a * b) / gcd(a, b);
    }
}
