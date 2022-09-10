package com.anhannek;

import org.junit.jupiter.api.Test;

import static com.anhannek.Unit2.sumOfSquares;
import static org.junit.jupiter.api.Assertions.*;

class Unit2Test {

    @Test
    void shouldEqual5() {
        int n = 2;
        assertEquals(5, sumOfSquares(n));
    }

    @Test
    void shouldEqual55() {
        int n = 5;
        assertEquals(55, sumOfSquares(n));
    }

    @Test
    void shouldEqual385() {
        int n = 10;
        assertEquals(385, sumOfSquares(n));
    }

    @Test
    void shouldEqual2870() {
        int n = 20;
        assertEquals(2870, sumOfSquares(n));
    }
}