#include "../../includes/libft.h"
#include "../../includes/ft_printf.h"

int main(void)
{
	char	*data;
	printf("||%d\n",	ft_printf("ft_printf : |{%-25p}", &data));
	printf("||%d\n",   printf("printf    : |{%-25p}", &data));

	printf("||%d\n",	ft_printf("ft_printf : |{%20p}", &data));
	printf("||%d\n",   printf("printf    : |{%20p}", &data));

	printf("||%d\n",	ft_printf("ft_printf : |{%-025p}", &data));
	printf("||%d\n",   printf("printf    : |{%-025p}", &data));

	printf("||%d\n",	ft_printf("ft_printf : |{%12p}", NULL));
	printf("||%d\n",   printf("printf    : |{%12p}", NULL));

	printf("||%d\n",	ft_printf("ft_printf : |%-015p", 0) - 13);
	printf("||%d\n",   printf("printf    : |%-015p", 0) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%.0p, %.p", 0, 0) - 13);
	printf("||%d\n",   printf("printf    : |%.0p, %.p", 0, 0) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%.5p", 0) - 13);
	printf("||%d\n",   printf("printf    : |%.5p", 0) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%lo, %llX, %hllX", -42, -42, -42) - 13);
	printf("||%d\n",   printf("printf    : |%lo, %llX, %hllX", -42, -42, -42) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%15.4d", -42) - 13);
	printf("||%d\n",   printf("printf    : |%15.4d", -42) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%4.15d", -42) - 13);
	printf("||%d\n",   printf("printf    : |%4.15d", -42) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%15.15d", -42) - 13);
	printf("||%d\n",   printf("printf    : |%15.15d", -42) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%2.2d", -423) - 13);
	printf("||%d\n",   printf("printf    : |%2.2d", -423) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%15.2d", -423) - 13);
	printf("||%d\n",   printf("printf    : |%15.2d", -423) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%2.15d", -423) - 13);
	printf("||%d\n",   printf("printf    : |%2.15d", -423) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%05d", -42) - 13);
	printf("||%d\n",   printf("printf    : |%05d", -42) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%0+5d", -42) - 13);
	printf("||%d\n",   printf("printf    : |%0+5d", -42) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%-5d", -42) - 13);
	printf("||%d\n",   printf("printf    : |%-5d", -42) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%-05d", -42) - 13);
	printf("||%d\n",   printf("printf    : |%-05d", -42) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%15.4u", 42) - 13);
	printf("||%d\n",   printf("printf    : |%15.4u", 42) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%15.4lo", 424242) - 13);
	printf("||%d\n",   printf("printf    : |%15.4lo", 424242) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%-10.5lo", 2500) - 13);
	printf("||%d\n",   printf("printf    : |%-10.5lo", 2500) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%---10.6llX", 0xaabb) - 13);
	printf("||%d\n",   printf("printf    : |%---10.6llX", 0xaabb) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%15.4llX", 42) - 13);
	printf("||%d\n",   printf("printf    : |%15.4llX", 42) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%---10.6llX", 0xaabb) - 13);
	printf("||%d\n",   printf("printf    : |%---10.6llX", 0xaabb) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%15.4llX", 42) - 13);
	printf("||%d\n",   printf("printf    : |%15.4llX", 42) - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%4.s", "42") - 13);
	printf("||%d\n",   printf("printf    : |%4.s", "42") - 13);

	printf("||%d\n",	ft_printf("ft_printf : |%---5.3s", "ylololo") - 13);
	printf("||%d\n",   printf("printf    : |%---5.3s", "ylololo") - 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |% d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |% d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%+d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%+d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%04d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%04d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |% 03d", 0) - 13);
	printf("||%d\n",	      printf("printf    : |% 03d", 0) - 13);

	printf("||%d\n",	   ft_printf("ft_printf : |% 03.4d", 0) - 13);
	printf("||%d\n",	      printf("printf    : |% 03.4d", 0) - 13);

	printf("||%d\n",	   ft_printf("ft_printf : |% 04.3d", 0) - 13);
	printf("||%d\n",	      printf("printf    : |% 04.3d", 0) - 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%0.2d|", 0)- 13);
	printf("||%d\n",	    printf("printf    : |%0.2d|", 0)- 13);

	printf("||%d\n",	ft_printf("ft_printf : |%-+d", 0) - 13);
	printf("||%d\n",	      printf("printf    : |%-+d", 0)- 13);

	printf("||%d\n",	ft_printf("ft_printf : |%+03d", 0) - 13);
	printf("||%d\n",   printf("printf    : |%+03d", 0) - 13);  

	printf("||%d\n",	   ft_printf("ft_printf : |%00+10.4d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%00+10.4d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%.0d|", 0)- 13);
	printf("||%d\n",	     printf("printf    : |%.0d|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%+-3d", 0)- 13);
	printf("||%d\n",	    printf("printf    : |%+-3d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-.1d|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%-.1d|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-.0d|", 0)- 13);
	printf("||%d\n",	     printf("printf    : |%-.0d|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-+5d|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%-+5d|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-+15d|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%-+15d|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%0.3d|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%0.3d|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-7.0d|", 0)- 13);
	printf("||%d\n",	     printf("printf    : |%-7.0d|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-12d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%-12d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%0-3d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%0-3d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%0-4.3d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%0-4.3d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%0-3.4d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%0-3.4d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-.4d|", -1)- 13);
	printf("||%d\n",	      printf("printf    : |%-.4d|", -1)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-+.4d|", -1)- 13);
	printf("||%d\n",	      printf("printf    : |%-+.4d|", -1)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%10.2d|", -1)- 13);
	printf("||%d\n",	    printf("printf    : |%10.2d|", -1)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%10.1d|", -1)- 13);
	printf("||%d\n",	      printf("printf    : |%10.1d|", -1)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%10.3d|", -1)- 13);
	printf("||%d\n",	      printf("printf    : |%10.3d|", -1)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-3.9d|", -1)- 13);
	printf("||%d\n",	      printf("printf    : |%-3.9d|", -1)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-3.2d|", -1)- 13);
	printf("||%d\n",	      printf("printf    : |%-3.2d|", -1)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-4p|", (void *)0)- 13);
	printf("||%d\n",	      printf("printf    : |%-4p|", (void *)0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-5.2s|", (void *)0)- 13);
	printf("||%d\n",	      printf("printf    : |%-5.2s|", (void *)0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%10.1lo|", 1)- 13);
	printf("||%d\n",	      printf("printf    : |%10.1lo|", 1)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-10.10lo|", 1)- 13);
	printf("||%d\n",	      printf("printf    : |%-10.10lo|", 1)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%10.3lo|", -1)- 13);
	printf("||%d\n",	      printf("printf    : |%10.3lo|", -1)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-7.3lo|", -1)- 13);
	printf("||%d\n",	      printf("printf    : |%-7.3lo|", -1)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-1.llX", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%-1.llX", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%05.2llX", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%05.2llX", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%05.0llX", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%05.0llX", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%05.5llX", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%05.5llX", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-5.0llX|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%-5.0llX|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-5.5llX|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%-5.5llX|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%05.2llX|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%05.2llX|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%05.5llX|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%05.5llX|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%10.9llX|", -1)- 13);
	printf("||%d\n",	      printf("printf    : |%10.9llX|", -1)- 13);
	printf("||%d\n",	   ft_printf("ft_printf : |%#04hllX", (unsigned short)0)- 13);
	printf("||%d\n",	      printf("printf    : |%#04hllX", (unsigned short)0)- 13);
	printf("||%d\n",	   ft_printf("ft_printf : |%-05%|")- 13);
	printf("||%d\n",	      printf("printf    : |%-05%|")- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%05%|")- 13);
	printf("||%d\n",	      printf("printf    : |%05%|")- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-5%|")- 13);
	printf("||%d\n",	      printf("printf    : |%-5%|")- 13);

	printf("||%d\n", ft_printf("ft_printf : |% 015.5d|", 478) - 13);
	printf("||%d\n", printf("ft_printf : |% 015.5d|", 478) - 13);
	printf("||%d\n", ft_printf("ft_printf : |%-#9llX|", (unsigned long long int)144789963325) - 13);
	printf("||%d\n", printf("ft_printf : |%-#9llX|", (unsigned long long int)144789963325) - 13);

	printf("||%d\n", ft_printf("ft_printf : |%-#9llX|", (unsigned long int)144789963325) - 13);
	printf("||%d\n", printf("ft_printf : |%-#9llX|", (unsigned long int)144789963325) - 13);
	printf("||%d\n", ft_printf("ft_printf : |% 015.5hhd|", (signed char)478) - 13);
	printf("||%d\n", printf("ft_printf : |% 015.5hhd|", (signed char)478) - 13);

	printf("||%d\n", ft_printf("ft_printf : |% 015.5hd|", (short int)478) - 13);
	printf("||%d\n", printf("ft_printf : |% 015.5hd|", (short int)478) - 13);

	printf("||%d\n", ft_printf("ft_printf : |% 015.5hhd|", (signed char)478) - 13);
	printf("||%d\n", printf("ft_printf : |% 015.5hhd|", (signed char)478) - 13);

	printf("||%d\n", ft_printf("ft_printf : |%05.15hhu|", (unsigned char)478) - 13);
	printf("||%d\n", printf("ft_printf : |%05.15hhu|", (unsigned char)478) - 13);


	printf("||%d\n",	   ft_printf("ft_printf : |%d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |% d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |% d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%+d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%+d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%04d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%04d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |% 03d", 0) - 13);
	printf("||%d\n",	      printf("printf    : |% 03d", 0) - 13);

	printf("||%d\n",	   ft_printf("ft_printf : |% 03.4d", 0) - 13);
	printf("||%d\n",	      printf("printf    : |% 03.4d", 0) - 13);

	printf("||%d\n",	   ft_printf("ft_printf : |% 04.3d", 0) - 13);
	printf("||%d\n",	      printf("printf    : |% 04.3d", 0) - 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%0.2d|", 0)- 13);
	printf("||%d\n",	    printf("printf    : |%0.2d|", 0)- 13);

	printf("||%d\n",	ft_printf("ft_printf : |%-+d", 0) - 13);
	printf("||%d\n",	      printf("printf    : |%-+d", 0)- 13);

	printf("||%d\n",	ft_printf("ft_printf : |%+03d", 0) - 13);
	printf("||%d\n",   printf("printf    : |%+03d", 0) - 13);  

	printf("||%d\n",	   ft_printf("ft_printf : |%00+10.4d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%00+10.4d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%.0d|", 0)- 13);
	printf("||%d\n",	     printf("printf    : |%.0d|", 0)- 13);



	printf("||%d\n",	   ft_printf("ft_printf : |%-.1d|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%-.1d|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-.0d|", 0)- 13);
	printf("||%d\n",	     printf("printf    : |%-.0d|", 0)- 13);


	printf("||%d\n",	   ft_printf("ft_printf : |%0.3d|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%0.3d|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-7.0d|", 0)- 13);
	printf("||%d\n",	     printf("printf    : |%-7.0d|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-12d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%-12d", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%+-3d", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%+-3d", 0)- 13);


	printf("||%d\n",	   ft_printf("ft_printf : |%-+5d|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%-+5d|", 0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%-+15d|", 0)- 13);
	printf("||%d\n",	      printf("printf    : |%-+15d|", 0)- 13);







	printf("||%d\n",	   ft_printf("% 0+-2.2d", 42));
	printf("||%d\n",	      printf("% 0+-2.2d", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.2d", -42));
	printf("||%d\n",	      printf("% 0+-2.2d", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.1d", 0));
	printf("||%d\n",	      printf("% 0+-2.1d", 0));

	printf("||%d\n",	   ft_printf("% 0+-2.d", 42));
	printf("||%d\n",	      printf("% 0+-2.d", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.d", -42));
	printf("||%d\n",	      printf("% 0+-2.d", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.d", 0));
	printf("||%d\n",	      printf("% 0+-2.d", 0));

	printf("||%d\n",	   ft_printf("% 0+-5.2d", 42));
	printf("||%d\n",	      printf("% 0+-5.2d", 42));

	printf("||%d\n",	   ft_printf("% 0+-5.2d", -42));
	printf("||%d\n",	      printf("% 0+-5.2d", -42));

	printf("||%d\n",	   ft_printf("% 0+-5.2d", 0));
	printf("||%d\n",	      printf("% 0+-5.2d", 0));

	printf("||%d\n",	   ft_printf("% 0+-d", 0));
	printf("||%d\n",	      printf("% 0+-d", 0));

	printf("||%d\n",	   ft_printf("% 0d", 0));
	printf("||%d\n",	      printf("% 0d", 0));

	printf("||%d\n",	   ft_printf("%d", 0));
	printf("||%d\n",	      printf("%d", 0));

	printf("||%d\n",	   ft_printf("% 0+-1.2d", 42));
	printf("||%d\n",	      printf("% 0+-1.2d", 42));







	printf("||%d\n",	   ft_printf("% 02.2d", 42));
	printf("||%d\n",	      printf("% 02.2d", 42));

	printf("||%d\n",	   ft_printf("% 02.2d", -42));
	printf("||%d\n",	      printf("% 02.2d", -42));

	printf("||%d\n",	   ft_printf("% 02.1d", 0));
	printf("||%d\n",	      printf("% 02.1d", 0));

	printf("||%d\n",	   ft_printf("% 02.d", 42));
	printf("||%d\n",	      printf("% 02.d", 42));

	printf("||%d\n",	   ft_printf("% 02.d", -42));
	printf("||%d\n",	      printf("% 02.d", -42));


	printf("||%d\n",	   ft_printf("% 05.2d", -42));
	printf("||%d\n",	      printf("% 05.2d", -42));

	printf("||%d\n",	   ft_printf("% 05.2d", 0));
	printf("||%d\n",	      printf("% 05.2d", 0));

	printf("||%d\n",	   ft_printf("% 0d", 0));
	printf("||%d\n",	      printf("% 0d", 0));

	printf("||%d\n",	   ft_printf("%d", 0));
	printf("||%d\n",	      printf("%d", 0));


	printf("||%d\n",	   ft_printf("% 01.2d", 42));
	printf("||%d\n",	      printf("% 01.2d", 42));

	printf("||%d\n",	   ft_printf("% 02.d", 0));
	printf("||%d\n",	      printf("% 02.d", 0));

	printf("||%d\n",	   ft_printf("% 0.d", 0));
	printf("||%d\n",	      printf("% 0.d", 0));

	printf("||%d\n",	   ft_printf("% .d", 0));
	printf("||%d\n",	      printf("% .d", 0));

	printf("||%d\n",	   ft_printf("% 05.2d", 42));
	printf("||%d\n",	      printf("% 05.2d", 42));








	printf("||%d\n",	   ft_printf("% 0+-2.2ld", 42));
	printf("||%d\n",	      printf("% 0+-2.2ld", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.2ld", -42));
	printf("||%d\n",	      printf("% 0+-2.2ld", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.1ld", 0));
	printf("||%d\n",	      printf("% 0+-2.1ld", 0));

	printf("||%d\n",	   ft_printf("% 0+-2.ld", 42));
	printf("||%d\n",	      printf("% 0+-2.ld", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.ld", -42));
	printf("||%d\n",	      printf("% 0+-2.ld", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.ld", 0));
	printf("||%d\n",	      printf("% 0+-2.ld", 0));

	printf("||%d\n",	   ft_printf("% 0+-5.2ld", 42));
	printf("||%d\n",	      printf("% 0+-5.2ld", 42));

	printf("||%d\n",	   ft_printf("% 0+-5.2ld", -42));
	printf("||%d\n",	      printf("% 0+-5.2ld", -42));

	printf("||%d\n",	   ft_printf("% 0+-5.2ld", 0));
	printf("||%d\n",	      printf("% 0+-5.2ld", 0));

	printf("||%d\n",	   ft_printf("% 0+-ld", 0));
	printf("||%d\n",	      printf("% 0+-ld", 0));

	printf("||%d\n",	   ft_printf("% 0+-ld", 0));
	printf("||%d\n",	      printf("% 0+-ld", 0));

	printf("||%d\n",	   ft_printf("% ld", 0));
	printf("||%d\n",	      printf("% ld", 0));

	printf("||%d\n",	   ft_printf("%ld", 0));
	printf("||%d\n",	      printf("%ld", 0));


	printf("||%d\n",	   ft_printf("% 0+-1.2ld", 42));
	printf("||%d\n",	      printf("% 0+-1.2ld", 42));







	printf("||%d\n",	   ft_printf("% 02.2ld", 42));
	printf("||%d\n",	      printf("% 02.2ld", 42));

	printf("||%d\n",	   ft_printf("% 02.2ld", -42));
	printf("||%d\n",	      printf("% 02.2ld", -42));

	printf("||%d\n",	   ft_printf("% 02.1ld", 0));
	printf("||%d\n",	      printf("% 02.1ld", 0));

	printf("||%d\n",	   ft_printf("% 02.ld", 42));
	printf("||%d\n",	      printf("% 02.ld", 42));

	printf("||%d\n",	   ft_printf("% 02.ld", -42));
	printf("||%d\n",	      printf("% 02.ld", -42));


	printf("||%d\n",	   ft_printf("% 05.2ld", -42));
	printf("||%d\n",	      printf("% 05.2ld", -42));

	printf("||%d\n",	   ft_printf("% 05.2ld", 0));
	printf("||%d\n",	      printf("% 05.2ld", 0));

	printf("||%d\n",	   ft_printf("% 0ld", 0));
	printf("||%d\n",	      printf("% 0ld", 0));

	printf("||%d\n",	   ft_printf("% 0ld", 0));
	printf("||%d\n",	      printf("% 0ld", 0));


	printf("||%d\n",	   ft_printf("% 01.2ld", 42));
	printf("||%d\n",	      printf("% 01.2ld", 42));

	printf("||%d\n",	   ft_printf("% 02.ld", 0));
	printf("||%d\n",	      printf("% 02.ld", 0));

	printf("||%d\n",	   ft_printf("% 05.2ld", 42));
	printf("||%d\n",	      printf("% 05.2ld", 42));







	printf("||%d\n",	   ft_printf("% 0+-2.2lld", 42));
	printf("||%d\n",	      printf("% 0+-2.2lld", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.2lld", -42));
	printf("||%d\n",	      printf("% 0+-2.2lld", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.1lld", 0));
	printf("||%d\n",	      printf("% 0+-2.1lld", 0));

	printf("||%d\n",	   ft_printf("% 0+-2.lld", 42));
	printf("||%d\n",	      printf("% 0+-2.lld", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.lld", -42));
	printf("||%d\n",	      printf("% 0+-2.lld", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.lld", 0));
	printf("||%d\n",	      printf("% 0+-2.lld", 0));

	printf("||%d\n",	   ft_printf("% 0+-5.2lld", 42));
	printf("||%d\n",	      printf("% 0+-5.2lld", 42));

	printf("||%d\n",	   ft_printf("% 0+-5.2lld", -42));
	printf("||%d\n",	      printf("% 0+-5.2lld", -42));

	printf("||%d\n",	   ft_printf("% 0+-5.2lld", 0));
	printf("||%d\n",	      printf("% 0+-5.2lld", 0));

	printf("||%d\n",	   ft_printf("% 0+-lld", 0));
	printf("||%d\n",	      printf("% 0+-lld", 0));

	printf("||%d\n",	   ft_printf("% 0+-lld", 0));
	printf("||%d\n",	      printf("% 0+-lld", 0));

	printf("||%d\n",	   ft_printf("% lld", 0));
	printf("||%d\n",	      printf("% lld", 0));

	printf("||%d\n",	   ft_printf("%lld", 0));
	printf("||%d\n",	      printf("%lld", 0));


	printf("||%d\n",	   ft_printf("% 0+-1.2lld", 42));
	printf("||%d\n",	      printf("% 0+-1.2lld", 42));







	printf("||%d\n",	   ft_printf("% 02.2lld", 42));
	printf("||%d\n",	      printf("% 02.2lld", 42));

	printf("||%d\n",	   ft_printf("% 02.2lld", -42));
	printf("||%d\n",	      printf("% 02.2lld", -42));

	printf("||%d\n",	   ft_printf("% 02.1lld", 0));
	printf("||%d\n",	      printf("% 02.1lld", 0));

	printf("||%d\n",	   ft_printf("% 02.lld", 42));
	printf("||%d\n",	      printf("% 02.lld", 42));

	printf("||%d\n",	   ft_printf("% 02.lld", -42));
	printf("||%d\n",	      printf("% 02.lld", -42));


	printf("||%d\n",	   ft_printf("% 05.2lld", -42));
	printf("||%d\n",	      printf("% 05.2lld", -42));

	printf("||%d\n",	   ft_printf("% 05.2lld", 0));
	printf("||%d\n",	      printf("% 05.2lld", 0));

	printf("||%d\n",	   ft_printf("% 0lld", 0));
	printf("||%d\n",	      printf("% 0lld", 0));

	printf("||%d\n",	   ft_printf("% 0lld", 0));
	printf("||%d\n",	      printf("% 0lld", 0));


	printf("||%d\n",	   ft_printf("% 01.2lld", 42));
	printf("||%d\n",	      printf("% 01.2lld", 42));

	printf("||%d\n",	   ft_printf("% 02.lld", 0));
	printf("||%d\n",	      printf("% 02.lld", 0));

	printf("||%d\n",	   ft_printf("% 05.2lld", 42));
	printf("||%d\n",	      printf("% 05.2lld", 42));


	printf("||%d\n",	   ft_printf("% 0+-2.2hd", 42));
	printf("||%d\n",	      printf("% 0+-2.2hd", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.2hd", -42));
	printf("||%d\n",	      printf("% 0+-2.2hd", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.1hd", 0));
	printf("||%d\n",	      printf("% 0+-2.1hd", 0));

	printf("||%d\n",	   ft_printf("% 0+-2.hd", 42));
	printf("||%d\n",	      printf("% 0+-2.hd", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.hd", -42));
	printf("||%d\n",	      printf("% 0+-2.hd", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.hd", 0));
	printf("||%d\n",	      printf("% 0+-2.hd", 0));

	printf("||%d\n",	   ft_printf("% 0+-5.2hd", 42));
	printf("||%d\n",	      printf("% 0+-5.2hd", 42));

	printf("||%d\n",	   ft_printf("% 0+-5.2hd", -42));
	printf("||%d\n",	      printf("% 0+-5.2hd", -42));

	printf("||%d\n",	   ft_printf("% 0+-5.2hd", 0));
	printf("||%d\n",	      printf("% 0+-5.2hd", 0));

	printf("||%d\n",	   ft_printf("% 0+-hd", 0));
	printf("||%d\n",	      printf("% 0+-hd", 0));

	printf("||%d\n",	   ft_printf("% 0hd", 0));
	printf("||%d\n",	      printf("% 0hd", 0));

	printf("||%d\n",	   ft_printf("%hd", 0));
	printf("||%d\n",	      printf("%hd", 0));

	printf("||%d\n",	   ft_printf("% 0+-1.2hd", 42));
	printf("||%d\n",	      printf("% 0+-1.2hd", 42));







	printf("||%d\n",	   ft_printf("% 02.2hd", 42));
	printf("||%d\n",	      printf("% 02.2hd", 42));

	printf("||%d\n",	   ft_printf("% 02.2hd", -42));
	printf("||%d\n",	      printf("% 02.2hd", -42));

	printf("||%d\n",	   ft_printf("% 02.1hd", 0));
	printf("||%d\n",	      printf("% 02.1hd", 0));

	printf("||%d\n",	   ft_printf("% 02.hd", 42));
	printf("||%d\n",	      printf("% 02.hd", 42));

	printf("||%d\n",	   ft_printf("% 02.hd", -42));
	printf("||%d\n",	      printf("% 02.hd", -42));


	printf("||%d\n",	   ft_printf("% 05.2hd", -42));
	printf("||%d\n",	      printf("% 05.2hd", -42));

	printf("||%d\n",	   ft_printf("% 05.2hd", 0));
	printf("||%d\n",	      printf("% 05.2hd", 0));

	printf("||%d\n",	   ft_printf("% 0hd", 0));
	printf("||%d\n",	      printf("% 0hd", 0));

	printf("||%d\n",	   ft_printf("%hd", 0));
	printf("||%d\n",	      printf("%hd", 0));


	printf("||%d\n",	   ft_printf("% 01.2hd", 42));
	printf("||%d\n",	      printf("% 01.2hd", 42));

	printf("||%d\n",	   ft_printf("% 02.hd", 0));
	printf("||%d\n",	      printf("% 02.hd", 0));

	printf("||%d\n",	   ft_printf("% 0.hd", 0));
	printf("||%d\n",	      printf("% 0.hd", 0));

	printf("||%d\n",	   ft_printf("% 0hd", 0));
	printf("||%d\n",	      printf("% 0hd", 0));


	printf("||%d\n",	   ft_printf("% .hd", 0));
	printf("||%d\n",	      printf("% .hd", 0));

	printf("||%d\n",	   ft_printf("% 05.2hd", 42));
	printf("||%d\n",	      printf("% 05.2hd", 42));



	printf("||%d\n",	   ft_printf("% 0+-2.2hhd", 42));
	printf("||%d\n",	      printf("% 0+-2.2hhd", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.2hhd", -42));
	printf("||%d\n",	      printf("% 0+-2.2hhd", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.1hhd", 0));
	printf("||%d\n",	      printf("% 0+-2.1hhd", 0));

	printf("||%d\n",	   ft_printf("% 0+-2.hhd", 42));
	printf("||%d\n",	      printf("% 0+-2.hhd", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.hhd", -42));
	printf("||%d\n",	      printf("% 0+-2.hhd", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.hhd", 0));
	printf("||%d\n",	      printf("% 0+-2.hhd", 0));

	printf("||%d\n",	   ft_printf("% 0+-5.2hhd", 42));
	printf("||%d\n",	      printf("% 0+-5.2hhd", 42));

	printf("||%d\n",	   ft_printf("% 0+-5.2hhd", -42));
	printf("||%d\n",	      printf("% 0+-5.2hhd", -42));

	printf("||%d\n",	   ft_printf("% 0+-5.2hhd", 0));
	printf("||%d\n",	      printf("% 0+-5.2hhd", 0));

	printf("||%d\n",	   ft_printf("% 0+-hhd", 0));
	printf("||%d\n",	      printf("% 0+-hhd", 0));

	printf("||%d\n",	   ft_printf("% 0hhd", 0));
	printf("||%d\n",	      printf("% 0hhd", 0));

	printf("||%d\n",	   ft_printf("%hhd", 0));
	printf("||%d\n",	      printf("%hhd", 0));

	printf("||%d\n",	   ft_printf("% 0+-1.2hhd", 42));
	printf("||%d\n",	      printf("% 0+-1.2hhd", 42));






	printf("||%d\n",	   ft_printf("% 02.2hhd", 42));
	printf("||%d\n",	      printf("% 02.2hhd", 42));

	printf("||%d\n",	   ft_printf("% 02.2hhd", -42));
	printf("||%d\n",	      printf("% 02.2hhd", -42));

	printf("||%d\n",	   ft_printf("% 02.1hhd", 0));
	printf("||%d\n",	      printf("% 02.1hhd", 0));

	printf("||%d\n",	   ft_printf("% 02.hhd", 42));
	printf("||%d\n",	      printf("% 02.hhd", 42));

	printf("||%d\n",	   ft_printf("% 02.hhd", -42));
	printf("||%d\n",	      printf("% 02.hhd", -42));


	printf("||%d\n",	   ft_printf("% 05.2hhd", -42));
	printf("||%d\n",	      printf("% 05.2hhd", -42));

	printf("||%d\n",	   ft_printf("% 05.2hhd", 0));
	printf("||%d\n",	      printf("% 05.2hhd", 0));

	printf("||%d\n",	   ft_printf("% 0hhd", 0));
	printf("||%d\n",	      printf("% 0hhd", 0));

	printf("||%d\n",	   ft_printf("%hhd", 0));
	printf("||%d\n",	      printf("%hhd", 0));


	printf("||%d\n",	   ft_printf("% 01.2hhd", 42));
	printf("||%d\n",	      printf("% 01.2hhd", 42));

	printf("||%d\n",	   ft_printf("% 02.hhd", 0));
	printf("||%d\n",	      printf("% 02.hhd", 0));

	printf("||%d\n",	   ft_printf("% 0.hhd", 0));
	printf("||%d\n",	      printf("% 0.hhd", 0));

	printf("||%d\n",	   ft_printf("% 0hhd", 0));
	printf("||%d\n",	      printf("% 0hhd", 0));


	printf("||%d\n",	   ft_printf("% .hhd", 0));
	printf("||%d\n",	      printf("% .hhd", 0));

	printf("||%d\n",	   ft_printf("% 05.2hhd", 42));
	printf("||%d\n",	      printf("% 05.2hhd", 42));





	printf("||%d\n",	   ft_printf("%0-2.2lo", 42));
	printf("||%d\n",	      printf("%0-2.2lo", 42));

	printf("||%d\n",	   ft_printf("%0-2.2lo", -42));
	printf("||%d\n",	      printf("%0-2.2lo", -42));

	printf("||%d\n",	   ft_printf("%0-2.1lo", 0));
	printf("||%d\n",	      printf("%0-2.1lo", 0));

	printf("||%d\n",	   ft_printf("%0-2.lo", 42));
	printf("||%d\n",	      printf("%0-2.lo", 42));

	printf("||%d\n",	   ft_printf("%0-2.lo", -42));
	printf("||%d\n",	      printf("%0-2.lo", -42));

	printf("||%d\n",	   ft_printf("%0-2.lo", 0));
	printf("||%d\n",	      printf("%0-2.lo", 0));

	printf("||%d\n",	   ft_printf("% 0-5.2lo", 42));
	printf("||%d\n",	      printf("% 0-5.2lo", 42));



	printf("||%d\n",	   ft_printf("% 02.2lo", 42));
	printf("||%d\n",	      printf("% 02.2lo", 42));

	printf("||%d\n",	   ft_printf("% 02.2lo", -42));
	printf("||%d\n",	      printf("% 02.2lo", -42));

	printf("||%d\n",	   ft_printf("% 02.1lo", 0));
	printf("||%d\n",	      printf("% 02.1lo", 0));

	printf("||%d\n",	   ft_printf("% 02.lo", 42));
	printf("||%d\n",	      printf("% 02.lo", 42));

	printf("||%d\n",	   ft_printf("% 02.lo", -42));
	printf("||%d\n",	      printf("% 02.lo", -42));

	printf("||%d\n",	   ft_printf("%0-2.lo", 0));
	printf("||%d\n",	      printf("%0-2.lo", 0));

	printf("||%d\n",	   ft_printf("%0-5.2lo", 42));
	printf("||%d\n",	      printf("%0-5.2lo", 42));

	printf("||%d\n",	   ft_printf("%0-5.2lo", -42));
	printf("||%d\n",	      printf("%0-5.2lo", -42));





	printf("||%d\n",	   ft_printf("%0-5.2lo", -42));
	printf("||%d\n",	      printf("%0-5.2lo", -42));

	printf("||%d\n",	   ft_printf("%0-5.2lo", 0));
	printf("||%d\n",	      printf("%0-5.2lo", 0));

	printf("||%d\n",	   ft_printf("%0-lo", 0));
	printf("||%d\n",	      printf("%0-lo", 0));

	printf("||%d\n",	   ft_printf("%0lo", 0));
	printf("||%d\n",	      printf("%0lo", 0));

	printf("||%d\n",	   ft_printf("%lo", 0));
	printf("||%d\n",	      printf("%lo", 0));

	printf("||%d\n",	   ft_printf("%0-1.2lo", 42));
	printf("||%d\n",	      printf("%0-1.2lo", 42));







	printf("||%d\n",	   ft_printf("%02.2lo", 42));
	printf("||%d\n",	      printf("%02.2lo", 42));

	printf("||%d\n",	   ft_printf("%02.2lo", -42));
	printf("||%d\n",	      printf("%02.2lo", -42));

	printf("||%d\n",	   ft_printf("%02.lo", 42));
	printf("||%d\n",	      printf("%02.lo", 42));

	printf("||%d\n",	   ft_printf("%02.lo", -42));
	printf("||%d\n",	      printf("%02.lo", -42));


	printf("||%d\n",	   ft_printf("%05.2lo", -42));
	printf("||%d\n",	      printf("%05.2lo", -42));


	printf("||%d\n",	   ft_printf("%0lo", 0));
	printf("||%d\n",	      printf("%0lo", 0));

	printf("||%d\n",	   ft_printf("%lo", 0));
	printf("||%d\n",	      printf("%lo", 0));


	printf("||%d\n",	   ft_printf("%01.2lo", 42));
	printf("||%d\n",	      printf("%01.2lo", 42));














	printf("||%d\n",	   ft_printf("%#0+-2.2lo", 42));
	printf("||%d\n",	      printf("%#0+-2.2lo", 42));

	printf("||%d\n",	   ft_printf("%#0+-2.2lo", -42));
	printf("||%d\n",	      printf("%#0+-2.2lo", -42));

	printf("||%d\n",	   ft_printf("%#0+-2.1lo", 0));
	printf("||%d\n",	      printf("%#0+-2.1lo", 0));

	printf("||%d\n",	   ft_printf("%#0-2.lo", 42));
	printf("||%d\n",	      printf("%#0-2.lo", 42));

	printf("||%d\n",	   ft_printf("%#0-2.lo", -42));
	printf("||%d\n",	      printf("%#0-2.lo", -42));


	printf("||%d\n",	   ft_printf("%#0-5.2lo", 42));
	printf("||%d\n",	      printf("%#0-5.2lo", 42));

	printf("||%d\n",	   ft_printf("%#0-5.2lo", -42));
	printf("||%d\n",	      printf("%#0-5.2lo", -42));


	printf("||%d\n",	   ft_printf("%#0-lo", 0));
	printf("||%d\n",	      printf("%#0-lo", 0));

	printf("||%d\n",	   ft_printf("%#0lo", 0));
	printf("||%d\n",	      printf("%#0lo", 0));

	printf("||%d\n",	   ft_printf("%#lo", 0));
	printf("||%d\n",	      printf("%#lo", 0));

	printf("||%d\n",	   ft_printf("%#0-1.2lo", 42));
	printf("||%d\n",	      printf("%#0-1.2lo", 42));







	printf("||%d\n",	   ft_printf("%#02.2lo", 42));
	printf("||%d\n",	      printf("%#02.2lo", 42));

	printf("||%d\n",	   ft_printf("%#02.2lo", -42));
	printf("||%d\n",	      printf("%#02.2lo", -42));



	printf("||%d\n",	   ft_printf("%#02.lo", 42));
	printf("||%d\n",	      printf("%#02.lo", 42));

	printf("||%d\n",	   ft_printf("%#02.lo", -42));
	printf("||%d\n",	      printf("%#02.lo", -42));

	printf("||%d\n",	   ft_printf("%#05.2lo", -42));
	printf("||%d\n",	      printf("%#05.2lo", -42));

	printf("||%d\n",	   ft_printf("%#0lo", 0));
	printf("||%d\n",	      printf("%#0lo", 0));

	printf("||%d\n",	   ft_printf("%#lo", 0));
	printf("||%d\n",	      printf("%#lo", 0));


	printf("||%d\n",	   ft_printf("%#01.2lo", 42));
	printf("||%d\n",	      printf("%#01.2lo", 42));



	printf("||%d\n",	   ft_printf("%#05.2lo", 42));
	printf("||%d\n",	      printf("%#05.2lo", 42));


	printf("||%d\n",	   ft_printf("%02.1lo", 0));
	printf("||%d\n",	      printf("%02.1lo", 0));

	printf("||%d\n",	   ft_printf("%05.2lo", 0));
	printf("||%d\n",	      printf("%05.2lo", 0));

	printf("||%d\n",	   ft_printf("%#05.2lo", 0));
	printf("||%d\n",	      printf("%#05.2lo", 0));



	printf("||%d\n",	   ft_printf("%05.2lo", 42));
	printf("||%d\n",	      printf("%05.2lo", 42));

	printf("||%d\n",	   ft_printf("%#02.1lo", 0));
	printf("||%d\n",	      printf("%#02.1lo", 0));





	printf("||%d\n",	   ft_printf("%#09.1lo", 0));
	printf("||%d\n",	      printf("%#09.1lo", 0));



	printf("||%d\n",	   ft_printf("%.lo", 0));
	printf("||%d\n",	      printf("%.lo", 0));

	printf("||%d\n",	   ft_printf("%0.lo", 0));
	printf("||%d\n",	      printf("%0.lo", 0));


	printf("||%d\n",	   ft_printf("%02.lo", 0));
	printf("||%d\n",	      printf("%02.lo", 0));

	printf("||%d\n",	   ft_printf("%#0-2.lo", 0));
	printf("||%d\n",	      printf("%#0-2.lo", 0));

	printf("||%d\n",	   ft_printf("%#0-5.2lo", 0));
	printf("||%d\n",	      printf("%#0-5.2lo", 0));

	printf("||%d\n",	   ft_printf("%#.lo", 0));
	printf("||%d\n",	      printf("%#.lo", 0));

	printf("||%d\n",	   ft_printf("%#0.lo", 0));
	printf("||%d\n",	      printf("%#0.lo", 0));

	printf("||%d\n",	   ft_printf("%#02.lo", 0));
	printf("||%d\n",	      printf("%#02.lo", 0));


	printf("||%d\n",	   ft_printf("%lo", 0));
	printf("||%d\n",	      printf("%lo", 0));

	printf("||%d\n",	   ft_printf("%#lo", 0));
	printf("||%d\n",	      printf("%#lo", 0));


	printf("||%d\n",	   ft_printf("%1lo", 0));
	printf("||%d\n",	      printf("%1lo", 0));

	printf("||%d\n",	   ft_printf("%#1lo", 0));
	printf("||%d\n",	      printf("%#1lo", 0));


	printf("||%d\n",	   ft_printf("% 0-2.2llX", 42));
	printf("||%d\n",	      printf("% 0-2.2llX", 42));

	printf("||%d\n",	   ft_printf("% 0-2.2llX", -42));
	printf("||%d\n",	      printf("% 0-2.2llX", -42));


	printf("||%d\n",	   ft_printf("% 0-2.llX", 42));
	printf("||%d\n",	      printf("% 0-2.llX", 42));

	printf("||%d\n",	   ft_printf("% 0-2.llX", -42));
	printf("||%d\n",	      printf("% 0-2.llX", -42));

	printf("||%d\n",	   ft_printf("% 0-2.llX", 0));
	printf("||%d\n",	      printf("% 0-2.llX", 0));

	printf("||%d\n",	   ft_printf("% 0-5.2llX", 42));
	printf("||%d\n",	      printf("% 0-5.2llX", 42));

	printf("||%d\n",	   ft_printf("% 0-5.2llX", -42));
	printf("||%d\n",	      printf("% 0-5.2llX", -42));

	printf("||%d\n",	   ft_printf("%0-5.2llX", 0));
	printf("||%d\n",	      printf("%0-5.2llX", 0));

	printf("||%d\n",	   ft_printf("%0-llX", 0));
	printf("||%d\n",	      printf("%0-llX", 0));

	printf("||%d\n",	   ft_printf("%0llX", 0));
	printf("||%d\n",	      printf("%0llX", 0));

	printf("||%d\n",	   ft_printf("%llX", 0));
	printf("||%d\n",	      printf("%llX", 0));

	printf("||%d\n",	   ft_printf("%0-1.2llX", 42));
	printf("||%d\n",	      printf("%0-1.2llX", 42));







	printf("||%d\n",	   ft_printf("%02.2llX", 42));
	printf("||%d\n",	      printf("%02.2llX", 42));

	printf("||%d\n",	   ft_printf("%02.2llX", -42));
	printf("||%d\n",	      printf("%02.2llX", -42));

	printf("||%d\n",	   ft_printf("%02.llX", 42));
	printf("||%d\n",	      printf("%02.llX", 42));

	printf("||%d\n",	   ft_printf("%02.llX", -42));
	printf("||%d\n",	      printf("%02.llX", -42));


	printf("||%d\n",	   ft_printf("%05.2llX", -42));
	printf("||%d\n",	      printf("%05.2llX", -42));


	printf("||%d\n",	   ft_printf("% 0llX", 0));
	printf("||%d\n",	      printf("% 0llX", 0));

	printf("||%d\n",	   ft_printf("%llX", 0));
	printf("||%d\n",	      printf("%llX", 0));

	printf("||%d\n",	   ft_printf("%.llX", 0));
	printf("||%d\n",	      printf("%.llX", 0));

	printf("||%d\n",	   ft_printf("%0.llX", 0));
	printf("||%d\n",	      printf("%0.llX", 0));
	printf("||%d\n",	   ft_printf("%#0llX", 0));
	printf("||%d\n",	      printf("%#0llX", 0));

	printf("||%d\n",	   ft_printf("%#llX", 0));
	printf("||%d\n",	      printf("%#llX", 0));

	printf("||%d\n",	   ft_printf("%#.llX", 0));
	printf("||%d\n",	      printf("%#.llX", 0));

	printf("||%d\n",	   ft_printf("%#0.llX", 0));
	printf("||%d\n",	      printf("%#0.llX", 0));




	printf("||%d\n",	   ft_printf("%01.2llX", 42));
	printf("||%d\n",	      printf("%01.2llX", 42));



















	printf("||%d\n",	   ft_printf("%#0-2.2llX", 42));
	printf("||%d\n",	      printf("%#0-2.2llX", 42));

	printf("||%d\n",	   ft_printf("%#0-2.2llX", -42));
	printf("||%d\n",	      printf("%#0-2.2llX", -42));


	printf("||%d\n",	   ft_printf("%#0-2.llX", 42));
	printf("||%d\n",	      printf("%#0-2.llX", 42));

	printf("||%d\n",	   ft_printf("%#0-2.llX", -42));
	printf("||%d\n",	      printf("%#0-2.llX", -42));



	printf("||%d\n",	   ft_printf("%#0-5.2llX", -42));
	printf("||%d\n",	      printf("%#0-5.2llX", -42));


	printf("||%d\n",	   ft_printf("%#0-llX", 0));
	printf("||%d\n",	      printf("%#0-llX", 0));

	printf("||%d\n",	   ft_printf("%#0llX", 0));
	printf("||%d\n",	      printf("%#0llX", 0));

	printf("||%d\n",	   ft_printf("%#llX", 0));
	printf("||%d\n",	      printf("%#llX", 0));

	printf("||%d\n",	   ft_printf("%#0-1.2llX", (unsigned long long)42));
	printf("||%d\n",	      printf("%#0-1.2llX", (unsigned long long)42));






	printf("||%d\n",	   ft_printf("%#02.2llX", 42));
	printf("||%d\n",	      printf("%#02.2llX", 42));

	printf("||%d\n",	   ft_printf("%#02.2llX", -42));
	printf("||%d\n",	      printf("%#02.2llX", -42));



	printf("||%d\n",	   ft_printf("%#02.llX", 42));
	printf("||%d\n",	      printf("%#02.llX", 42));

	printf("||%d\n",	   ft_printf("%#02.llX", -42));
	printf("||%d\n",	      printf("%#02.llX", -42));

	printf("||%d\n",	   ft_printf("%#05.2llX", -42));
	printf("||%d\n",	      printf("%#05.2llX", -42));

	printf("||%d\n",	   ft_printf("%#0llX", 0));
	printf("||%d\n",	      printf("%#0llX", 0));

	printf("||%d\n",	   ft_printf("%#llX", 0));
	printf("||%d\n",	      printf("%#llX", 0));
	printf("||%d\n",	   ft_printf("%#01.2llX", (unsigned long long)42));
	printf("||%d\n",	      printf("%#01.2llX", (unsigned long long)42));









	printf("||%d\n",	   ft_printf("%#09.1llX", 0));
	printf("||%d\n",	      printf("%#09.1llX", 0));



	printf("||%d\n",	   ft_printf("%.llX", 0));
	printf("||%d\n",	      printf("%.llX", 0));

	printf("||%d\n",	   ft_printf("%0.llX", 0));
	printf("||%d\n",	      printf("%0.llX", 0));


	printf("||%d\n",	   ft_printf("%02.llX", 0));
	printf("||%d\n",	      printf("%02.llX", 0));

	printf("||%d\n",	   ft_printf("%#0-2.llX", 0));
	printf("||%d\n",	      printf("%#0-2.llX", 0));

	printf("||%d\n",	   ft_printf("%#0-5.2llX", 0));
	printf("||%d\n",	      printf("%#0-5.2llX", 0));

	printf("||%d\n",	   ft_printf("%#.llX", 0));
	printf("||%d\n",	      printf("%#.llX", 0));

	printf("||%d\n",	   ft_printf("%#0.llX", 0));
	printf("||%d\n",	      printf("%#0.llX", 0));

	printf("||%d\n",	   ft_printf("%#02.llX", 0));
	printf("||%d\n",	      printf("%#02.llX", 0));




	printf("||%d\n",	   ft_printf("%#05.2llX", 42));
	printf("||%d\n",	      printf("%#05.2llX", 42));





	printf("||%d\n",	   ft_printf("%05.2llX", 42));
	printf("||%d\n",	      printf("%05.2llX", 42));
	
	printf("||%d\n",	   ft_printf("%#0-5.2llX", 42));
	printf("||%d\n",	      printf("%#0-5.2llX", 42));
	printf("||%d\n",	   ft_printf("%#02.1llX", 0));
	printf("||%d\n",	      printf("%#02.1llX", 0));

	printf("||%d\n",	   ft_printf("%#0-2.1llX", 0));
	printf("||%d\n",	      printf("%#0-2.1llX", 0));

	printf("||%d\n",	   ft_printf("%#05.2llX", 0));
	printf("||%d\n",	      printf("%#05.2llX", 0));





	printf("||%d\n",	   ft_printf("%#1.1llX", 0));
	printf("||%d\n",	      printf("%#1.1llX", 0));

	printf("||%d\n",	   ft_printf("%#1.2llX", 0));
	printf("||%d\n",	      printf("%#1.2llX", 0));


	printf("||%d\n",	   ft_printf("%#llX", 0));
	printf("||%d\n",	      printf("%#llX", 0));

	
	printf("||%d\n",	   ft_printf("%#1llX", 0));
	printf("||%d\n",	      printf("%#1llX", 0));

	printf("||%d\n",	   ft_printf("%llX", 0));
	printf("||%d\n",	      printf("%llX", 0));

	printf("||%d\n",	   ft_printf("%1llX", 0));
	printf("||%d\n",	      printf("%1llX", 0));

	printf("||%d\n",	   ft_printf("% 05.2llX", 0));
	printf("||%d\n",	      printf("% 05.2llX", 0));



	
		printf("||%d\n",	   ft_printf("% 0-2.1llX", 0));
	printf("||%d\n",	      printf("% 0-2.1llX", 0));

	
	printf("||%d\n",	   ft_printf("% 02.1llX", 0));
	printf("||%d\n",	      printf("% 02.1llX", 0));



	

	printf("||%d\n",	   ft_printf("% 0+-2.2u", 42));
	printf("||%d\n",	      printf("% 0+-2.2u", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.2u", -42));
	printf("||%d\n",	      printf("% 0+-2.2u", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.u", 42));
	printf("||%d\n",	      printf("% 0+-2.u", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.u", -42));
	printf("||%d\n",	      printf("% 0+-2.u", -42));



	printf("||%d\n",	   ft_printf("% 0+-5.2u", 42));
	printf("||%d\n",	      printf("% 0+-5.2u", 42));

	printf("||%d\n",	   ft_printf("% 0+-5.2u", -42));
	printf("||%d\n",	      printf("% 0+-5.2u", -42));



	
	printf("||%d\n",	   ft_printf("% 0+-1.2u", 42));
	printf("||%d\n",	      printf("% 0+-1.2u", 42));



	



	printf("||%d\n",	   ft_printf("% 02.2u", 42));
	printf("||%d\n",	      printf("% 02.2u", 42));

	printf("||%d\n",	   ft_printf("% 02.2u", -42));
	printf("||%d\n",	      printf("% 02.2u", -42));

	printf("||%d\n",	   ft_printf("% 02.u", 42));
	printf("||%d\n",	      printf("% 02.u", 42));

	printf("||%d\n",	   ft_printf("% 02.u", -42));
	printf("||%d\n",	      printf("% 02.u", -42));


	printf("||%d\n",	   ft_printf("% 05.2u", -42));
	printf("||%d\n",	      printf("% 05.2u", -42));

	printf("||%d\n",	   ft_printf("%u", 0));
	printf("||%d\n",	      printf("%u", 0));

	printf("||%d\n",	   ft_printf("%05.2u", 0));
	printf("||%d\n",	      printf("%05.2u", 0));

	printf("||%d\n",	   ft_printf("%0u", 0));
	printf("||%d\n",	      printf("%0u", 0));

	printf("||%d\n",	   ft_printf("%u", 0));
	printf("||%d\n",	      printf("%u", 0));

	printf("||%d\n",	   ft_printf("%0+-u", 0));
	printf("||%d\n",	      printf("%0+-u", 0));

	printf("||%d\n",	   ft_printf("%0u", 0));
	printf("||%d\n",	      printf("%0u", 0));


	printf("||%d\n",	   ft_printf("%01.2u", 42));
	printf("||%d\n",	      printf("%01.2u", 42));

	printf("||%d\n",	   ft_printf("%05.2u", 42));
	printf("||%d\n",	      printf("%05.2u", 42));



	printf("||%d\n",	   ft_printf("%02.1u", 0));
	printf("||%d\n",	      printf("%02.1u", 0));

	printf("||%d\n",	   ft_printf("%0-2.u", 0));
	printf("||%d\n",	      printf("%0-2.u", 0));



	printf("||%d\n",	   ft_printf("%02.u", 0));
	printf("||%d\n",	      printf("%02.u", 0));

	printf("||%d\n",	   ft_printf("%0-5.2u", 0));
	printf("||%d\n",	      printf("%0-5.2u", 0));

	printf("||%d\n",	   ft_printf("%0-2.1u", 0));
	printf("||%d\n",	      printf("%0-2.1u", 0));

	printf("||%d\n",	   ft_printf("%0-.u", 0));
	printf("||%d\n",	      printf("%0-.u", 0));

	printf("||%d\n",	   ft_printf("%0.u", 0));
	printf("||%d\n",	      printf("%0.u", 0));

	printf("||%d\n",	   ft_printf("%u", 0));
	printf("||%d\n",	      printf("%u", 0));


	printf("||%d\n",	   ft_printf("% 0+-2.2lu", 42));
	printf("||%d\n",	      printf("% 0+-2.2lu", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.2lu", -42));
	printf("||%d\n",	      printf("% 0+-2.2lu", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.lu", 42));
	printf("||%d\n",	      printf("% 0+-2.lu", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.lu", -42));
	printf("||%d\n",	      printf("% 0+-2.lu", -42));



	printf("||%d\n",	   ft_printf("% 0+-5.2lu", 42));
	printf("||%d\n",	      printf("% 0+-5.2lu", 42));

	printf("||%d\n",	   ft_printf("% 0+-5.2lu", -42));
	printf("||%d\n",	      printf("% 0+-5.2lu", -42));



	
	printf("||%d\n",	   ft_printf("% 0+-1.2lu", 42));
	printf("||%d\n",	      printf("% 0+-1.2lu", 42));



	



	printf("||%d\n",	   ft_printf("% 02.2lu", 42));
	printf("||%d\n",	      printf("% 02.2lu", 42));

	printf("||%d\n",	   ft_printf("% 02.2lu", -42));
	printf("||%d\n",	      printf("% 02.2lu", -42));

	printf("||%d\n",	   ft_printf("% 02.lu", 42));
	printf("||%d\n",	      printf("% 02.lu", 42));

	printf("||%d\n",	   ft_printf("% 02.lu", -42));
	printf("||%d\n",	      printf("% 02.lu", -42));


	printf("||%d\n",	   ft_printf("% 05.2lu", -42));
	printf("||%d\n",	      printf("% 05.2lu", -42));

	printf("||%d\n",	   ft_printf("%lu", 0));
	printf("||%d\n",	      printf("%lu", 0));

	printf("||%d\n",	   ft_printf("%05.2lu", 0));
	printf("||%d\n",	      printf("%05.2lu", 0));

	printf("||%d\n",	   ft_printf("%0lu", 0));
	printf("||%d\n",	      printf("%0lu", 0));

	printf("||%d\n",	   ft_printf("%lu", 0));
	printf("||%d\n",	      printf("%lu", 0));

	printf("||%d\n",	   ft_printf("%0+-lu", 0));
	printf("||%d\n",	      printf("%0+-lu", 0));

	printf("||%d\n",	   ft_printf("%0lu", 0));
	printf("||%d\n",	      printf("%0lu", 0));


	printf("||%d\n",	   ft_printf("%01.2lu", 42));
	printf("||%d\n",	      printf("%01.2lu", 42));




	printf("||%d\n",	   ft_printf("%02.1lu", 0));
	printf("||%d\n",	      printf("%02.1lu", 0));

	printf("||%d\n",	   ft_printf("%0-2.lu", 0));
	printf("||%d\n",	      printf("%0-2.lu", 0));



	printf("||%d\n",	   ft_printf("%02.lu", 0));
	printf("||%d\n",	      printf("%02.lu", 0));

	printf("||%d\n",	   ft_printf("%0-5.2lu", 0));
	printf("||%d\n",	      printf("%0-5.2lu", 0));

	printf("||%d\n",	   ft_printf("%0-2.1lu", 0));
	printf("||%d\n",	      printf("%0-2.1lu", 0));

	printf("||%d\n",	   ft_printf("%0-.lu", 0));
	printf("||%d\n",	      printf("%0-.lu", 0));

	printf("||%d\n",	   ft_printf("%0.lu", 0));
	printf("||%d\n",	      printf("%0.lu", 0));

	printf("||%d\n",	   ft_printf("%lu", 0));
	printf("||%d\n",	      printf("%lu", 0));


	printf("||%d\n",	   ft_printf("%05.2lu", 42));
	printf("||%d\n",	      printf("%05.2lu", 42));



	printf("||%d\n",	   ft_printf("% 0+-2.2llu", 42));
	printf("||%d\n",	      printf("% 0+-2.2llu", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.2llu", -42));
	printf("||%d\n",	      printf("% 0+-2.2llu", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.llu", 42));
	printf("||%d\n",	      printf("% 0+-2.llu", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.llu", -42));
	printf("||%d\n",	      printf("% 0+-2.llu", -42));



	printf("||%d\n",	   ft_printf("% 0+-5.2llu", 42));
	printf("||%d\n",	      printf("% 0+-5.2llu", 42));

	printf("||%d\n",	   ft_printf("% 0+-5.2llu", -42));
	printf("||%d\n",	      printf("% 0+-5.2llu", -42));



	
	printf("||%d\n",	   ft_printf("% 0+-1.2llu", 42));
	printf("||%d\n",	      printf("% 0+-1.2llu", 42));



	



	printf("||%d\n",	   ft_printf("% 02.2llu", 42));
	printf("||%d\n",	      printf("% 02.2llu", 42));

	printf("||%d\n",	   ft_printf("% 02.2llu", -42));
	printf("||%d\n",	      printf("% 02.2llu", -42));

	printf("||%d\n",	   ft_printf("% 02.llu", 42));
	printf("||%d\n",	      printf("% 02.llu", 42));

	printf("||%d\n",	   ft_printf("% 02.llu", -42));
	printf("||%d\n",	      printf("% 02.llu", -42));


	printf("||%d\n",	   ft_printf("% 05.2llu", -42));
	printf("||%d\n",	      printf("% 05.2llu", -42));

	printf("||%d\n",	   ft_printf("%llu", 0));
	printf("||%d\n",	      printf("%llu", 0));

	printf("||%d\n",	   ft_printf("%05.2llu", 0));
	printf("||%d\n",	      printf("%05.2llu", 0));

	printf("||%d\n",	   ft_printf("%0llu", 0));
	printf("||%d\n",	      printf("%0llu", 0));

	printf("||%d\n",	   ft_printf("%llu", 0));
	printf("||%d\n",	      printf("%llu", 0));

	printf("||%d\n",	   ft_printf("%0+-llu", 0));
	printf("||%d\n",	      printf("%0+-llu", 0));

	printf("||%d\n",	   ft_printf("%0llu", 0));
	printf("||%d\n",	      printf("%0llu", 0));


	printf("||%d\n",	   ft_printf("%01.2llu", 42));
	printf("||%d\n",	      printf("%01.2llu", 42));




	printf("||%d\n",	   ft_printf("%02.1llu", 0));
	printf("||%d\n",	      printf("%02.1llu", 0));

	printf("||%d\n",	   ft_printf("%0-2.llu", 0));
	printf("||%d\n",	      printf("%0-2.llu", 0));



	printf("||%d\n",	   ft_printf("%02.llu", 0));
	printf("||%d\n",	      printf("%02.llu", 0));

	printf("||%d\n",	   ft_printf("%0-5.2llu", 0));
	printf("||%d\n",	      printf("%0-5.2llu", 0));

	printf("||%d\n",	   ft_printf("%0-2.1llu", 0));
	printf("||%d\n",	      printf("%0-2.1llu", 0));

	printf("||%d\n",	   ft_printf("%0-.llu", 0));
	printf("||%d\n",	      printf("%0-.llu", 0));

	printf("||%d\n",	   ft_printf("%0.llu", 0));
	printf("||%d\n",	      printf("%0.llu", 0));

	printf("||%d\n",	   ft_printf("%llu", 0));
	printf("||%d\n",	      printf("%llu", 0));


	printf("||%d\n",	   ft_printf("%05.2llu", 42));
	printf("||%d\n",	      printf("%05.2llu", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.2hu", 42));
	printf("||%d\n",	      printf("% 0+-2.2hu", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.2hu", -42));
	printf("||%d\n",	      printf("% 0+-2.2hu", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.hu", 42));
	printf("||%d\n",	      printf("% 0+-2.hu", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.hu", -42));
	printf("||%d\n",	      printf("% 0+-2.hu", -42));



	printf("||%d\n",	   ft_printf("% 0+-5.2hu", 42));
	printf("||%d\n",	      printf("% 0+-5.2hu", 42));

	printf("||%d\n",	   ft_printf("% 0+-5.2hu", -42));
	printf("||%d\n",	      printf("% 0+-5.2hu", -42));



	
	printf("||%d\n",	   ft_printf("% 0+-1.2hu", 42));
	printf("||%d\n",	      printf("% 0+-1.2hu", 42));



	



	printf("||%d\n",	   ft_printf("% 02.2hu", 42));
	printf("||%d\n",	      printf("% 02.2hu", 42));

	printf("||%d\n",	   ft_printf("% 02.2hu", -42));
	printf("||%d\n",	      printf("% 02.2hu", -42));

	printf("||%d\n",	   ft_printf("% 02.hu", 42));
	printf("||%d\n",	      printf("% 02.hu", 42));

	printf("||%d\n",	   ft_printf("% 02.hu", -42));
	printf("||%d\n",	      printf("% 02.hu", -42));


	printf("||%d\n",	   ft_printf("% 05.2hu", -42));
	printf("||%d\n",	      printf("% 05.2hu", -42));

	printf("||%d\n",	   ft_printf("%hu", 0));
	printf("||%d\n",	      printf("%hu", 0));

	printf("||%d\n",	   ft_printf("%05.2hu", 0));
	printf("||%d\n",	      printf("%05.2hu", 0));

	printf("||%d\n",	   ft_printf("%0hu", 0));
	printf("||%d\n",	      printf("%0hu", 0));

	printf("||%d\n",	   ft_printf("%hu", 0));
	printf("||%d\n",	      printf("%hu", 0));

	printf("||%d\n",	   ft_printf("%0+-hu", 0));
	printf("||%d\n",	      printf("%0+-hu", 0));

	printf("||%d\n",	   ft_printf("%0hu", 0));
	printf("||%d\n",	      printf("%0hu", 0));


	printf("||%d\n",	   ft_printf("%01.2hu", 42));
	printf("||%d\n",	      printf("%01.2hu", 42));

	printf("||%d\n",	   ft_printf("%05.2hu", 42));
	printf("||%d\n",	      printf("%05.2hu", 42));



	printf("||%d\n",	   ft_printf("%02.1hu", 0));
	printf("||%d\n",	      printf("%02.1hu", 0));

	printf("||%d\n",	   ft_printf("%0-2.hu", 0));
	printf("||%d\n",	      printf("%0-2.hu", 0));



	printf("||%d\n",	   ft_printf("%02.hu", 0));
	printf("||%d\n",	      printf("%02.hu", 0));

	printf("||%d\n",	   ft_printf("%0-5.2hu", 0));
	printf("||%d\n",	      printf("%0-5.2hu", 0));

	printf("||%d\n",	   ft_printf("%0-2.1hu", 0));
	printf("||%d\n",	      printf("%0-2.1hu", 0));

	printf("||%d\n",	   ft_printf("%0-.hu", 0));
	printf("||%d\n",	      printf("%0-.hu", 0));

	printf("||%d\n",	   ft_printf("%0.hu", 0));
	printf("||%d\n",	      printf("%0.hu", 0));

	printf("||%d\n",	   ft_printf("%hu", 0));
	printf("||%d\n",	      printf("%hu", 0));


	printf("||%d\n",	   ft_printf("% 0+-2.2hhu", 42));
	printf("||%d\n",	      printf("% 0+-2.2hhu", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.2hhu", -42));
	printf("||%d\n",	      printf("% 0+-2.2hhu", -42));

	printf("||%d\n",	   ft_printf("% 0+-2.hhu", 42));
	printf("||%d\n",	      printf("% 0+-2.hhu", 42));

	printf("||%d\n",	   ft_printf("% 0+-2.hhu", -42));
	printf("||%d\n",	      printf("% 0+-2.hhu", -42));



	printf("||%d\n",	   ft_printf("% 0+-5.2hhu", 42));
	printf("||%d\n",	      printf("% 0+-5.2hhu", 42));

	printf("||%d\n",	   ft_printf("% 0+-5.2hhu", -42));
	printf("||%d\n",	      printf("% 0+-5.2hhu", -42));



	
	printf("||%d\n",	   ft_printf("% 0+-1.2hhu", 42));
	printf("||%d\n",	      printf("% 0+-1.2hhu", 42));



	



	printf("||%d\n",	   ft_printf("% 02.2hhu", 42));
	printf("||%d\n",	      printf("% 02.2hhu", 42));

	printf("||%d\n",	   ft_printf("% 02.2hhu", -42));
	printf("||%d\n",	      printf("% 02.2hhu", -42));

	printf("||%d\n",	   ft_printf("% 02.hhu", 42));
	printf("||%d\n",	      printf("% 02.hhu", 42));

	printf("||%d\n",	   ft_printf("% 02.hhu", -42));
	printf("||%d\n",	      printf("% 02.hhu", -42));


	printf("||%d\n",	   ft_printf("% 05.2hhu", -42));
	printf("||%d\n",	      printf("% 05.2hhu", -42));

	printf("||%d\n",	   ft_printf("%hhu", 0));
	printf("||%d\n",	      printf("%hhu", 0));

	printf("||%d\n",	   ft_printf("%05.2hhu", 0));
	printf("||%d\n",	      printf("%05.2hhu", 0));

	printf("||%d\n",	   ft_printf("%0hhu", 0));
	printf("||%d\n",	      printf("%0hhu", 0));

	printf("||%d\n",	   ft_printf("%hhu", 0));
	printf("||%d\n",	      printf("%hhu", 0));

	printf("||%d\n",	   ft_printf("%0+-hhu", 0));
	printf("||%d\n",	      printf("%0+-hhu", 0));

	printf("||%d\n",	   ft_printf("%0hhu", 0));
	printf("||%d\n",	      printf("%0hhu", 0));


	printf("||%d\n",	   ft_printf("%01.2hhu", 42));
	printf("||%d\n",	      printf("%01.2hhu", 42));

	printf("||%d\n",	   ft_printf("%05.2hhu", 42));
	printf("||%d\n",	      printf("%05.2hhu", 42));



	printf("||%d\n",	   ft_printf("%02.1hhu", 0));
	printf("||%d\n",	      printf("%02.1hhu", 0));

	printf("||%d\n",	   ft_printf("%0-2.hhu", 0));
	printf("||%d\n",	      printf("%0-2.hhu", 0));



	printf("||%d\n",	   ft_printf("%02.hhu", 0));
	printf("||%d\n",	      printf("%02.hhu", 0));

	printf("||%d\n",	   ft_printf("%0-5.2hhu", 0));
	printf("||%d\n",	      printf("%0-5.2hhu", 0));

	printf("||%d\n",	   ft_printf("%0-2.1hhu", 0));
	printf("||%d\n",	      printf("%0-2.1hhu", 0));

	printf("||%d\n",	   ft_printf("%0-.hhu", 0));
	printf("||%d\n",	      printf("%0-.hhu", 0));

	printf("||%d\n",	   ft_printf("%0.hhu", 0));
	printf("||%d\n",	      printf("%0.hhu", 0));

	printf("||%d\n",	   ft_printf("%hhu", 0));
	printf("||%d\n",	      printf("%hhu", 0));

	printf("||%d\n",	 ft_printf("ft_printf : |%f|", 0.0)- 13);
	printf("||%d\n",	  printf("printf    : |%f|", 0.0)- 13);

	printf("||%d\n",	   ft_printf("ft_printf : |%0+9.3f|", 1.1)- 13);
	printf("||%d\n",	      printf("printf    : |%0+9.3f|", 1.1)- 13);

	return (0);
}
