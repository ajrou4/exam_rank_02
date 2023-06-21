int		max(int* tab, unsigned int len)
{
    int i = 0;
<<<<<<< HEAD
    int max = tab[i];

    while(i < len)
    {
        if(max > tab[i])
            max = tab[i];
        i++;
    }
    return max;
=======
    int max ;
     max = tab[i];
     while (i < len)
     {
		if(max < tab[i])
			max = tab[i];
		i++;
     }
     return max;
>>>>>>> 0de1286ad6ddc929f999250ddc6322734aff82fb
}