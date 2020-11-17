#include <stdio.h>
#include "dumphex.h"

void dumphex(uint8_t *buf, uint16_t size)
{
    uint16_t i;
    printf("------------------------------------------------------\r\n");
    printf("ADDR | 00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f\r\n");
    printf("-----+------------------------------------------------\r\n");
    for (i = 0; i < size; i++)
    {
        if (i % 16 == 0)
        {
            printf("%04x | ", i);
        }
        printf("%02x ", buf[i]);
        if ((i + 1) % 16 == 0)
        {
            printf("\r\n");
        }
    }
    printf("------------------------------------------------------\r\n");
}