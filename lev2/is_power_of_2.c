#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    unsigned int nbr =1 ;
    while(nbr <= n)
   {
        if(nbr == n)
            return 1;
        nbr *= 2;
   }
   return 0;
}

int main()
{
    unsigned int n = 234324;  
    if(is_power_of_2(n))
        printf("%d is powet of 2\n",n);
    else
         printf("%d is not powet of 2\n",n);
}