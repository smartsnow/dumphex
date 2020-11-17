#include "dumphex.h"

int main(int argc, char *argv[])
{
    uint8_t buf[512];
    for (int i = 0; i < sizeof(buf); i++)
    {
        buf[i] = i;
    }
    dumphex(buf, sizeof(buf));

    return 0;
}