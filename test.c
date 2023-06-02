/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkioukou <lkioukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:49:45 by lkioukou          #+#    #+#             */
/*   Updated: 2023/05/31 14:33:34 by lkioukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ok merge sort
1) len list    2) /2  until theres 2 for every /2     522,,,313 so /2 the len of every sub and its 3 and sort the way up recussion might work
3) maybe if the items are equal i can keep a counter and delete the item and just top on the side by side of the equal number * counter

ok 2nd idea

allow only len of argv to pass to next
so if len(argv)= 1 push b
if top of b > of top a push a and rotate b
we can only check the bigger and put the bigger first 
*by checking argv[biggest len] and the put it first and the second biggest and rotate

5 numbers 12 operations
                                        6 7 23 1 2      i can do reverse and push first the second biggest or the 3rd biggest and then the biggest
                                pb pb  swapb    23 1 2       7 6           do smallest to biggest
                                pb              1 2         23 7 6
                (swap or not )  swapa  (reverse swap) pusha rs pusha 23 7 6 2  1

				so logic push biggest on b             and on b sort them smallest to biggest and just push to a again

*/