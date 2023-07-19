	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
	/*   midsort.c                                          :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2023/06/15 10:29:12 by lkioukou          #+#    #+#             */
	/*   Updated: 2023/07/03 15:14:45 by lkioukou         ###   ########.fr       */
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

int		*s_int_swap(int *s)
{
	int temp;

	temp = s[0];
	s[0] = s[1];
	s[1] = s[0];
	return (s);
}

int		*s_int_rra(int *s)
{
	int		leng;
	int		i;
	int	temp;

	while (s[i++])
		leng += 1;
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

int		*s_int_ra(int *s)
{
	int		leng;
	int		i;
	int		temp;

	while (s[i++])
		leng += 1;
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

	int	big_n2(int *s)
	{
		static long int			a;
		long int				i;
		long int				temp;
		long int				index;

		temp = INT_MIN;
		index = 0;
		i = 0;
		if (!a)
		{
			a = INT_MAX;
		}
		while (s[i])
		{
			printf("it this:%i\n",s[i]);
			if (s[i] > temp && s[i] < a)
			{
				temp = s[i];
				index = i;
			}
			i++;
		}
		a = temp;
		printf("it this i mean a:%li\n",a);
		printf("w: %li\n",index);
		return (index);
	}

	int	final_sort_a(t_stack *a, int function_counter, int *s)// i dont need s everything is small anwyays unless i redo s logic
	{
		long int	*indexplacement;
		int	i;
		int	place_counter;
		int	gap;
		int	temp;
		int	asize;
		int	index;

		asize = a->size;
		indexplacement = malloc((a->size) * sizeof(int *));
		i = 0;
		gap = 0;
		printf("hmmmmmmis:%i\n", asize);
		// while (s[i++])
		// 	printf("s be like rign now:%d\n",s[i]);
		while (i <= numlen(s) - 1) 
		{
			index = big_n2(s) - 1;
			printf("indexxxxxxx[%i]\n",index);

        	indexplacement[index] = asize;
			asize--;
			printf("experrrrrrrrrrrrrrrrr[%li]\n",indexplacement[i]);

       		i++;

    	}
		//i = 0;
		printf("after indexplacement1[]%li\n",indexplacement[0]);
		while(issorted(*a) == 0)
		{
			place_counter = 0;
			i = 0;
			while(indexplacement[i])
			{
				//  for (int i = 0; i < a->size; i++) {
 		 		//  	printf("indexplacement[%d]: %ld\n", i, indexplacement[i]);
				//  }
				printf("we inside3\n");
				// printf("we firstis:%li\n",indexplacement[place_counter + 1]);
				// printf("we second:%li\n",indexplacement[place_counter] + 1);
				// printf("we second:%li\n",indexplacement[place_counter] + 2);

				if (indexplacement[place_counter + 1]  == indexplacement[place_counter] + 1)////////////////so i dont get inside here at all
				{
					place_counter++;
					printf("we intheifjust saying\n");

				}
				else
				{
					printf("we inside 4\n");

					temp = indexplacement[place_counter];
					printf("temp be like %i\n",temp);

					while (indexplacement[place_counter] != temp + 1  && place_counter < asize)////////////////so i dont get inside here at all
					{
						printf("indexplacement[place_counter]: %li\n", indexplacement[place_counter]);
						printf("temp + 1: %i\n", temp + 1);
						gap++;
						printf("gap be like %i\n", gap);
						place_counter++;
					}
					printf("gap be like %i\n",gap);

					temp = gap;
					printf("we inside 4 outside\n");

					while (gap > 0)
					{
						printf("we inside while\n");

						ra(*a);
						s = s_int_ra(s);/////buh this was characters now i have numbers rip i think i fixed idk
						gap--;
						function_counter++;
					}
					printf("we inside 7\n");
					//printf("gap might\n");
					while(temp != gap)////////////////here i dont know what is wrong
					{
						printf("tlk ti ginete");

						sa(a);
						rra(a);
						printf("tlk ti ginete");
						s_int_rra(s);
						s_int_swap(s);
						function_counter += 2;
					}
				}
				i++;
			}
			// while (place_counter > 0)
			// {
			// 	ra(a);
			// 	s = sra(s);
			// }


			// sa(a);
			// printf("skata");
			// ra(*a);
			// s = sra(s);
			//function_counter++;
		}
		return (function_counter);
	}

	int	bbool(char *s)
	{
		int	i;
	
		i = 0;
		while (s[i])
		{
			if (s[i] == 'b')
				return (1);
			i++;
		}
		return(0);
	}

	int	mbool(char *s)
	{
		int	i;
	
		i = 0;
		while (s[i])
		{
			if (s[i] == 'm')
				return (1);
			i++;
		}
		return(0);
	}

	int	*kinda_need_a_list(t_stack a)
	{
		t_stack temp;
		int	i;
		int *str;

		temp = a;
		i = 0;
		str = malloc((a.size + 1) * sizeof(int));
		printf("a be like %i\n",a.size);
		while(i < a.size)
		{
			str[i] = temp.stack->value;
			//printf("skata\n");
			temp.stack = temp.stack->next;
			i++;
		}
		printf("skata\n");
		//str[i] = '\0';
		return (str);
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
		int *list;
		int	bigbool;
		int	midbool;

		i = 0;
		function_counter = 0;
		big_counter = last / 3;
		mid_counter = big_counter / 2;
		printf("Current big_counterbelike:%i\n", big_counter);
		list = listnums;
		while(issorted(*a) == 0 )//&& !b->size|| && function_counter > 0 maybe this works too
		{

			//printf("before loop: s = %s\n", s);
			printf("Current stack a:%i\n", a->stack->value);
			printf("Current string character:%c\n", s[i]);
			printf("Current big_biggest:%i\n", big_biggest);
			printf("Current big_counterbelike:%i\n", big_counter);
			printf("Current mid_counterbelike:%i\n", mid_counter);
			printf("startDebug: s[0] = %c\n", s[0]);
			printf("S be like s = %s\n", s);
			last = stringlen(s) - 1; //7
			temp = 0;
			if (mid_counter > 0)
				mid_biggest = (third_med(s, listnums, 'm'));
			else
				mid_biggest = 0;
			if (big_counter > 0)
				big_biggest = (third_med(s, listnums, 'b'));
			else
				big_biggest = 0;
			if (s[0] == 's' && s[1] == 's')
			{
				if (a->stack->value > a->stack->next->value)
				{
					printf("skatempeikla\n");
					sa(a);
					s = sswap(s);
					function_counter++;
				}
			}
			//printf("After loop: s = %s\n", s);
			//break;
			bigbool = bbool(s);
			if (bigbool == 0)
				big_counter = 0;
			midbool = mbool(s);
			if (midbool == 0)
				mid_counter = 0;
			while(s[0] != 'b' && big_counter > 0) // && s[0] != '\0'
			{
				if (mid_counter > 0)
					mid_biggest = (third_med(s, listnums, 'm'));
				if (big_counter > 0)
					big_biggest = (third_med(s, listnums, 'b'));
				printf("mid:%i\n",mid_biggest);
				printf("big:%i\n",big_biggest);
				printf("Debug: s[0] = %c\n", s[0]);
				printf("Debug: s[1] = %c\n", s[1]);
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
					printf("2Debug: s[temp] = %c\n", s[temp]);
					printf("2Debug: s[temp + 1] = %c\n", s[temp + 1]);
					printf("2Debug: s[last] = %c\n", s[last]);
					ra(*a);
					s = sra(s);
					function_counter+=3;
					temp++;
					last--;
				}
				else
				{
					printf("skata\n");
					// ok edw psaxnw ta pou ine pio konta to b opote counter kai *
					temp++;
					last--;
					if (temp > last)
						temp = 0;
					if (last < 0)
						last = stringlen(s) - 1;
					printf("After loop: s = %s\n", s);
				}
				printf("afterelselast:%i\n",last);
				printf("afterelsetemp:%i\n",temp);
			}
			printf("i = %i\n", i);
			printf("After loop: s = %s\n", s);
			if (s[0] == 'b' )//&& s[0] >= big_biggest
			{
				printf("im inside second phraseeeeeee");
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
			if ((s[0] == 'm' && mid_counter > 0) && big_counter == 0)// && s[0] >= mid_biggest
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
			else if ((s[0] == 's' && mid_counter > 0) && big_counter == 0)
			{
				ra(*a);
				s = sra(s);
			}
			if(mid_counter == 0 && big_counter == 0 && b->size > 0)
			{
				list = kinda_need_a_list(*a);
				function_counter += final_sort_a(a, function_counter, list);//create an argv here somehow lol
				resort(a, b, function_counter);
				//free()
			}
			if ((mid_counter == 0 && big_counter == 0) && !b->size)
			{
				//printf("slata");
				ra(*a);
				s = sra(s);
				function_counter++;
			}
			i++; // to eixa sto pano if htan else if kai mesa ++' alla to allaksa tr for fun
			printf("After everything: s = %s\n", s);
		}
		return (function_counter);
	}
