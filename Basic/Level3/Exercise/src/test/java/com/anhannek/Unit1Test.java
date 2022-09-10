package com.anhannek;

import org.junit.jupiter.api.Test;

import static com.anhannek.Unit1.sum;
import static org.junit.jupiter.api.Assertions.*;

class Unit1Test {

    @Test
    void shouldEqualSix() {
        int n = 3;
        assertEquals(6, sum(n));
    }
}