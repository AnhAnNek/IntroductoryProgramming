package com.anhannek;

import java.util.Scanner;

public class Unit1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int result = sum(n);
        System.out.println(result);
    }

    public static int sum(int n) {
        return ( n * (n + 1) )/ 2;
    }
}
