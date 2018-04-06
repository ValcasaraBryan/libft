/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:16:07 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/04 18:28:02 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	int		c;
	int		d;
	int		len;
	int		len_2;
	char	str[6] = "salut";
	char	str_2[6] = "salut";
	char	string[6] = "salut";
	char	string_2[6] = "salut";
	const char str_3[6] = "salut";
	const char str_4[6] = "salut";
	const char str_5[9] = "salautp";
	const char str_6[9] = "salautp";
	void	*s;
	void	*t;
	int		i;
	int		j;

/*
	i = 0;
	c = 65;
	len = 4;
	ft_putchar(97);
	ft_putchar('\n');
	ft_putstr("salut\n");


	printf("str       = %s\nmemset    = ", str);
	s = &str;
	memset(s, c, len);
	while (i < 5)
		printf("%c", str[i++]);
	printf("\ns         = %s\n", s);
	printf("str       = %s\n\n", str);

	i = 0;
	d = 66;
	len_2 = 4;
	printf("str_2     = %s\nft_memset = ", str_2);
	t = &str_2;
	ft_memset(t, d, len_2);
	while (i < 5)
		printf("%c", str_2[i++]);
	printf("\nt         = %s\n", t);
	printf("str_2     = %s\n\n", str_2);

	i = 0;
	printf("string    = %s\n", string);
	bzero(string, 1);
	while (i < 5)
		printf("%c", string[i++]);

	i = 0;
	printf("\nstring_2  = %s\n", string_2);
	ft_bzero(string_2, 1);
	while (i < 5)
		printf("%c", string_2[i++]);
	i = 0;
	c = 0;
*/
/*
	while (c != INT_MAX && c != INT_MIN)
	{
		printf("\n--------------------------------");
		printf("\n\nisalnum    = %d\n", isalnum(i));
		printf("ft_isalnum = %d\n\n", ft_isalnum(i));

		printf("\nisalpha    = %d\n", isalpha(i));
		printf("ft_isalpha = %d\n\n", ft_isalpha(i));

		printf("\nisascii    = %d\n", isascii(i));
		printf("ft_isascii = %d\n\n", ft_isascii(i));

		printf("\nisdigit    = %d\n", isdigit(i));
		printf("ft_isdigit = %d\n\n", ft_isdigit(i));

		printf("\nisprint    = %d\n", isprint(i));
		printf("ft_isprint = %d\n\n", ft_isprint(i));

		printf("si tu veux arreter le test tape -1\ni = %d\ni = %c\n", i, (char)i);
		printf("--------------------------------\n");

		scanf("%d", &c);
		if (c == 1)
			i++;
		else if (c == 0)
			i--;
		else if (c > 1)
			i = c;
		if (c <= -1)
			break;
	}
*/
	j = 1;
	i = j;
/*
	while (j != INT_MAX)
	{
		printf("\n--------------------------------\n");
		printf("%s\n", strchr(str_3, j));
		printf("%s\n", ft_strchr(str_4, i));
		printf("si tu veux arreter le test tape -1\ni = %d\ni = %c\n", j, (char)j);
		printf("--------------------------------\n");
				scanf("%d", &c);
		if (c == 1)
			j++;
		else if (c == 0)
			j--;
		else if (c > 1)
			j = c;
		i = j;
		if (c <= -1)
			break;
	}
*/
/*
	printf("%s\n", strrchr(str_5, 97));
	printf("%s\n\n", ft_strrchr(str_6, 97));

	i = 3;
	const char botte_de_foin[10] = "ffeffe";
	const char aiguille[10] = "fe";

	printf ("botte de foin      = %s\naiguille           = %s\ni = %d\n", botte_de_foin, aiguille, i);
	printf ("ft_strnstr renvoi  = %s\n", ft_strnstr(botte_de_foin, aiguille, (unsigned int)i));
	printf ("strnstr    renvoi  = %s\n\n", strnstr(botte_de_foin, aiguille, (unsigned int)i));

	i = 97;
	j = 97;
	printf("i = %d   j = %d\ntoupper    = %d\n", i, j, toupper(i));
	printf("ft_toupper = %d\n\n",ft_toupper(j));

	i = 65;
	j = 65;
	printf("i = %d   j = %d\ntolower    = %d\n", i, j, tolower(i));
	printf("ft_tolower = %d\n\n", ft_tolower(j));
*/
	char	src[] = "test basic du memccpy !"; // 24
	char	dst[22];
	char	src_2[] = "test basic du memccpy !"; // 24
	char	dst_2[22];	
	char	*src_3 = "\xff\xaa\xde\200";
	char	*dst_3 = "\xff\xaa\xde\0";
	char	*src_4 = "\xff\xaa\xde\200";
	char	*dst_4 = "\xff\xaa\xde\0";

	char	src_5[7] = "salut";
	char	dst_5[7] = "coucou";

	char	src_6[7] = "salut";
	char	dst_6 = 'u';

	c = 109;
	i = 0;
	char	*x; 
	char	*y;


	char srcaz[] = "test basic du memccpy !";
	char buff1[22];
//	printf("%p\n", buff1);
	char *r1;
	char *r2;
/*
	printf("mem %p\nft_memccpy = %p\n\n", r1, r2);
	r1 = memccpy(buff1, srcaz, 'm', 22);
	printf("mem %p\nft_memccpy = %p\n\n", r1, r2);
	r2 = ft_memccpy(buff1, srcaz, 'm', 22);
	printf("mem %p\nft_memccpy = %p\n\n", r1, r2);
	r1 = memccpy("", srcaz, 'm', 0);
	r2 = ft_memccpy("", srcaz, 'm', 0);
	printf("mem %p\nft_memccpy = %p\n\n", r1, r2);
*/
//	int cal = 0xF0 - 0xF;
//	printf("%d\n", cal);

	char dst1[0xF0];
	char dst2[0xF0];
	char dst3[0xF0];
	char dst4[0xF0];
	char *data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	char *data2 = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	int size = 0xF0 - 0xF;

    memset(dst1, 'A', sizeof(dst1));
    memset(dst2, 'A', sizeof(dst2));
    memcpy(dst1, data, strlen(data));
    memcpy(dst2, data, strlen(data));

    memset(dst3, 'A', sizeof(dst3));
    memset(dst4, 'A', sizeof(dst4));
    memcpy(dst3, data2, strlen(data2));
    memcpy(dst4, data2, strlen(data2));

//	printf("dst 2 adresse = %p\ndst 2 adresse = %p\n\n", dst2 + 3, dst2);

	ft_memmove(dst2 + 3, dst2, size);
	//printf("dst 2 = %s\n\n", dst2);

	memmove(dst4 + 3, dst4, size);
	//printf("dst 2 = %s\n\n", dst4);




	i = 8;
/*
	x = &dst_3;
	y = &src_3;
	memcpy(x, y, (unsigned int)i);
	printf("memcpy     = %s\n", dst_3);

	x = &dst_4;
	y = &src_4;
	ft_memcpy(x, y, (unsigned int)i);
	printf("ft_memcpy  = %s\n\n", dst_4);
*/
//	printf("src_4 = %s\ndst_3 = %s\n", src_4, dst_3);

	printf("memcmp     = %d\n", memcmp(src_3, dst_3, (unsigned int) i));
	printf("ft_memcmp  = %d\n\n", ft_memcmp(src_4, dst_4, (unsigned int) i));
/*
	x = &dst_5;
	y = &src_5;
	printf("memmove    = %s\n", memmove(y, x, 3));
	printf("ft_memmove = %s\n\n", ft_memmove(y, x, 3));

	y = &src_6;
	printf("memchr     = %s\n", memchr(y, dst_6, 5));
	printf("ft_memchr  = %s\n\n", ft_memchr(y, dst_6, 5));

*/







	return (0);
}
