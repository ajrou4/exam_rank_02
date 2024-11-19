unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    int res = 0;
    while (i> 0)
    {
       res = res * 2 + (octet % 2);
       octet = octet / 2;
       i--;
    }
    
    int  i = 8;
    int res = 0;
    while(i > 0)
    {
        res = res * 2 + (octet % 10);
        octet = octet / 10;
        i--;
    }
}
