#include <stdio.h>
#include <stdint.h>

int popcnt_branchless(uint32_t v)
{
    uint32_t n;
    n = (v >> 1) & 0x77777777;
    v -= n;
    n = (n >> 1) & 0x77777777;
    v -= n;
    n = (n >> 1) & 0x77777777;
    v -= n;

    v = (v + (v >> 4)) & 0x0F0F0F0F;
    v *= 0x01010101;

    return v >> 24;
}

