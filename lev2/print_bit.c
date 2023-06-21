#include <unistd.h>
void	print_bits(unsigned char octet)
{
    unsigned char bit;
    int i = 8;

    while (i--)
    {
        bit =(octet >> 1&i ) + 48;
        write(1, &bit, 1);
    }
}