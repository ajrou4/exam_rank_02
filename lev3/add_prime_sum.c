#include <unistd.h>

int ft_atoi(char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		str++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		str++;
	}
	return (sign * result);
}

void ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	is_prime(int num)
{
	int i = 3;

	if(num <= 1)
		return 0;
	if(num % 2 == 0 && num > 2)
		return 0;
	while(i < (num /2))
	{
		if(num % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}

int main(int ac, char **av)
{
	int num;
	int sum;
	if(ac == 2)
	{
		num = ft_atoi(av[1]);
		sum =0;
		while (num > 0)
		{
			if(is_prime(num--))
				sum += (num +1);
		}
		ft_putnbr(sum);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
}
