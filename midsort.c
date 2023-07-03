/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:29:12 by lkioukou          #+#    #+#             */
/*   Updated: 2023/07/03 15:01:00 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	midsort(t_stack *a, t_stack *b, int argc, char **argv)
{
	int	max;
	int	min;

	stack_creation(b, argc, argv);
	max = indexfinder(*a);
	min = minfinder(*a);
	if (min <= 3 || max <= 3)
		max_or_min(a, max, min);
	else
	{
		while (max != 1 && min != 1)
		{
			rra(a);
			max = indexfinder(*a);
			min = minfinder(*a);
		}
	}
	pb(a, b);
	smallsort(a);
	pa(b, a);
	if (issorted(*a) == 1)
		return ;
	ra(*a);
}

int	big_n(int *s)
{
	static long int			a;
	long int				i;
	long int				temp;
	long int				index;

	temp = INT_MIN;
	index = 0;
	i = 0;
	a = INT_MAX;
	while (s[i] && s[i] < a)
	{
		if (s[i] > temp)
		{
			temp = s[i];
			index = i;
		}
		i++;
	}
	a = temp;
	//printf("it this:%li\n",a);
	//printf("w: %li\n",index);
	return (index);
}

char	*thebiggestones(int *indexs, int argc, t_stack *a)
{
	char	*d;
	int		bigger_counter;
	int		big_counter;
	int		index;
	int		temp;

	d = malloc((a->size + 1) * sizeof(char));
	temp = argc;
	bigger_counter = argc / 3;//    now its  	2
	big_counter = bigger_counter / 2;//		1
	while (argc > 0)
	{
		index = big_n(indexs);
		if (bigger_counter > 0)
		{
			d[index] = 'b';/// 	index 5
			bigger_counter--;
		}
		else if (big_counter > 0)
		{
			d[index] = 'm';// index 5
			big_counter--;
		}
		else
			d[index] = 's';
		indexs[index] = INT_MIN;
		argc--;
	}
	return (d);
}

void	thebigsort(t_stack *a, t_stack *b, int argc, char **argv)
{
	int		*slength;
	int		*temp;
	int		i;
	int		j;
	char	*indexlist;
	int		temp1;

	temp1 = 0;
	slength = malloc((argc) * sizeof(int));
	temp = malloc((argc) * sizeof(int));
	i = 1;
	j = 0;
	while (i < argc)
	{
		slength[j] = ft_atoi(argv[i]);
		temp[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
	slength[j] = '\0';
	temp[j] = '\0';
	indexlist = thebiggestones(slength, argc - 1, a);
	all_mighty_sort(indexlist, a, b, temp);
	//free(slength);
}

int	resort(t_stack *a, t_stack *b, int function_counter)
{
	while (b->stack)
	{
		pa(b, a);
		function_counter++;
	}
	pa(b, a);
	function_counter++;
	return (function_counter);
}

int	final_sort_a(t_stack *a, int function_counter, char *s)
{
	int	fax;

	fax = 0;
	while(issorted(*a) == 0)
	{
		sa(a);
		printf("skata");
		ra(*a);
		s = sra(s);
		function_counter++;
	}
	return (function_counter);
}

// int	mid_founder(char *s)
// {
// 	int	i;
// 	int	temp;

// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != 'm')
// 			i++;
// 		if (s[i] == 'm')
// 			temp = s[i];
// 	}
// 	return (i);
// }

int	third_med(char *s, int *listnums, char character)
{
	long int	i;
	long int	max1;
	long int	max2;
	long int	max3;

	max1 = INT_MIN;
	max2 = INT_MIN;
	max3 = INT_MIN;
	i = 0;
	while (s[i])
	{
		while (s[i] != character && s[i])
			i++;
		if (!s[i])
            break;
		if (listnums[i] > max1)
		{
			max3 = max2;
			max2 = max1;
			max1 = listnums[i];
		}
		else if (listnums[i] > max2)
		{
			max3 = max2;
			max2 = max1;
		}
		else if (listnums[i] > max3)
			max3 = listnums[i];
		i++;
	}
	if (max3 == INT_MIN)
    {
        if (max2 == INT_MIN)
            max3 = max1;
        else
            max3 = max2;
	}
	return (max3);
}

char	*srra(char *s)
{
	int		leng;
	int		i;
	char	temp;

	leng = stringlen(s);
	i = leng - 1;
	temp = s[leng - 1];
	while (i > 0)
	{
		s[i] = s[i - 1];
		i--;
	}
	s[0] = temp;
	return (s);
}

char	*sra(char *s)
{
	int		leng;
	int		i;
	char	temp;

	leng = stringlen(s);
	i = 0;
	temp = s[0];
	while (i < leng - 1)
	{
		s[i] = s[i + 1];
		i++;
	}
	s[leng - 1] = temp;
	return (s);
}

char	*spush(char *s)
{
	int		leng;
	int		i;
	char	temp;

	leng = stringlen(s);
	i = 0;
	while (i < leng - 1)
	{
		s[i] = s[i + 1];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*sswap(char *s)
{
	int temp;

	temp = s[0];
	s[0] = s[1];
	s[1] = s[0];	
	return (s);
}

int	all_mighty_sort(char *s, t_stack *a, t_stack *b, int *listnums)
{
	int	i;
	int	big_counter;
	int	mid_counter;
	int	last;
	int temp;
	int	mid_biggest;
	int	big_biggest;
	int	function_counter;

	i = 0;
	function_counter = 0;
	mid_counter = last / 3;
	big_counter = mid_counter / 2;
	while(issorted(*a) == 0)//&& !b->size
	{
		printf("before loop: s = %s\n", s);
		printf("Current stack a:%i\n", a->stack->value);
        printf("Current string character:%c\n", s[i]);
        printf("Current big_biggest:%i\n", big_biggest);
		last = stringlen(s) - 1;
		temp = 0;
		if (mid_counter > 0)
			mid_biggest = (third_med(s, listnums, 'm'));
		if (big_counter > 0)
			big_biggest = (third_med(s, listnums, 'b'));
		if (s[0] == 's' && s[1] == 's')
		{
			if (a->stack->value > a->stack->next->value)
			{
				sa(a);
				s = sswap(s);
				function_counter++;
			}
		}
		while(s[0] != 'b' && s[0] != '\0')
		{
			printf("mid:%i\n",mid_biggest);

			printf("big:%i\n",big_biggest);
			printf("Debug: s[0] = %c\n", s[0]);
			if (s[last] == 'b' && s[temp] != 'b')   ///an to tora den ine B alla to last ine 
			{
				printf("skata");
				while(last < stringlen(s))
				{	
					rra(a);
					s = srra(s);
					last++;
				}
				function_counter+=3;
			}
			else if ((s[temp + 1] == 'b' && s[temp] != 'b') && s[last] != 'b')
			{
				printf("Debug: s[temp] = %c\n", s[temp]);
 				printf("Debug: s[last] = %c\n", s[last]);
				while(temp > 0)
				{
					ra(*a);
					s = sra(s);
					temp--;
				}
				function_counter+=3;
			}
			else
			{
				// ok edw psaxnw ta pou ine pio konta to b opote counter kai *
				temp++;
				last--;
				if (temp > last)
					break;
			}
			printf("last:%i\n",last);
			printf("temp:%i\n",temp);
		}			
		printf("After loop: s = %s\n", s);
		if (s[i] == 'b' && s[i] >= big_biggest)
		{
			pb(a, b);
			s = spush(s);
			function_counter++;
			//big_biggest = b->stack->value; wrong?
			big_counter--;
			//printf("slata");
			printf("Before loop: s = %s\n", s);
			if (b->stack->next != NULL)
			{
				printf("skata2\n");
				if(b->stack->next->value < b->stack->value)
				{
					printf("skata2\n");
					if(s[i] == 'b')
						sb(b);
					else
					{
						ss(*a, *b);
						s = spush(s);
					}
				}
				function_counter++;
			}
		}
		else if ((s[i] == 'm' && mid_counter == 0) && s[i] >= mid_biggest)
		{
			pb(a, b);
			s = spush(s);
			function_counter++;
			mid_counter--;
			if(b->stack->next->value < b->stack->value)
			{
				if(s[i] == 'm')
				{
					sb(b);
					s = spush(s);
				}
				else
				{
					ss(*a, *b);
					s = spush(s);
				}
			}
			function_counter++;
		}
		else if(mid_counter == 0 && big_counter == 0)
		{
			function_counter += final_sort_a(a, function_counter, s);
			resort(a, b, function_counter);
		}
		else if ((mid_counter == 0 && big_counter == 0) && !b->size)
		{
			//printf("slata");
			ra(*a);
			s = sra(s);
			function_counter++;
			i++;
		}
		printf("After everything: s = %s\n", s);
	}
	return (function_counter);
}
