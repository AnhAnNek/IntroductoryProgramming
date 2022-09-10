package com.anhannek;

public class Unit10 {
    public static void main(String[] args) {
        int a = 10, b = 11;
        int n = 21;
        int sum = getSum(a, b, n);
        System.out.println(sum);
    }

    public static int getSum(int a, int b, int n) {
        int sum = 0;
        for (int i = Math.min(a, b); i < n; i++)
            if (i % a == 0 && i % b != 0)
                sum += i;
        return sum;
    }
}
