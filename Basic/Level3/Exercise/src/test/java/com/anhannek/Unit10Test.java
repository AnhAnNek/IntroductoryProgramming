package com.anhannek;

import org.junit.jupiter.api.Test;

import static com.anhannek.Unit10.getSum;
import static org.junit.jupiter.api.Assertions.*;

class Unit10Test {

    @Test
    void testCase1() {
        int a = 1, b = 2;
        int n = 10;
        assertEquals(25, getSum(a, b, n));
    }
}