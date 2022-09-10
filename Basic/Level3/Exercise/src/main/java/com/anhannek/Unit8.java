package com.anhannek;

public class Unit8 {
    public static void main(String[] args) {
        int n = 145640923;
        int rev = getNumberReverse(n);
        System.out.println(rev);
    }

    public static int getNumberReverse(int n) {
        int temp = n;
        int rev = 0;
        while (temp > 0) {
            rev = (rev * 10) + (temp % 10);
            temp /= 10;
        }
        return rev;
    }
}
