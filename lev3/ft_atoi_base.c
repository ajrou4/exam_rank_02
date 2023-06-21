int    ft_tolower(int c)
{
    if(c >= 'A' && c <='Z')
        c += 32;
    return c;
}

int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    	return (1);
    else
    	return (0); 
}

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
// int ft_atoi_base(const char *str, int str_base) {
//     int result = 0;
//     int sign = 1;
//     int i = 0;
    
//     if (str[i] == '-') {
//         sign = -1;
//         i++;
//     }
    
//     while (str[i] != '\0') {
//         char c = ft_tolower(str[i]);
//         int digit;
        
//         if (ft_isdigit(c))
//             digit = c - '0';
//         else if (ft_isalpha(c))
//             digit = c - 'a' + 10;
//         else
//             break;
        
//         if (digit >= str_base)
//             break;
        
//         result = result * str_base + digit;
//         i++;
//     }
    
//     return result * sign;
// }     








int	ft_atoi_base(const char *str, int str_base)
{
    int res =0;
    int sing =1;
    int i = 0;
    if(str[i] == '-')
    {
        sing =-1;
        i++;
    } 

    while (str[i])
    {
        char c = ft_tolower(str[i]);
        int digit;
        if(ft_isdigit(c))
            digit = c +48;
        else if(ft_isalpha(c))
            digit = c -'a' + 10;
        else
            break;
        if(digit >= str_base)
            break;
        res =res *str_base + digit;
        i++;
    }
    return res * sing;
    
}










// int main() {
//     // Example usage
//     const char *str = "12FDB3";
//     int base = 16;
//     int result = ft_atoi_base(str, base);
    
//     printf("Result: %d\n", result); // Output: Result: 19347763
    
//     return 0;
// }