ft_memset:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_bzero:      [OK] [OK] [OK] [OK] 
ft_memcpy:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_memccpy:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_memmove:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_memchr:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_memcmp:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strlen:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strdup:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strcpy:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strncpy:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strcat:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strncat:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strlcat:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strchr:     [OK] [OK] [OK] [OK] [OK] [OK] [CRASH] [OK] [OK] [OK] 
[crash]: your strchr does not work with \0
Test code:
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *d1 = strchr(src, '\0');
	char *d2 = ft_strchr(src, '\0');

	if (d1 == d2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


ft_strrchr:    [OK] [OK] [FAILED] [FAILED] [FAILED] [OK] [OK] 
[fail]: your strrchr does not work with unicode
Test code:
	char *src = "Ä«Å“Ë™Ë€Ë˜Â¯Ë‡Â¸Â¯.Å“Â«â€˜â€“â€“â„¢Âªâ€¢Â¡Â¶Â¢ËœË€";
	char *d1 = strrchr(src, L'â€“');
	char *d2 = ft_strrchr(src, L'â€“');

	if (d1 == d2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
     strrchr: |(null)|
  ft_strrchr: |Ä«Å“Ë™Ë€Ë˜Â¯Ë‡Â¸Â¯.Å“Â«â€˜â€“â€“â„¢Âªâ€¢Â¡Â¶Â¢ËœË€|

[fail]: your strrchr does not work with \0
Test code:
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *d1 = strrchr(src, '\0');
	char *d2 = ft_strrchr(src, '\0');

	if (d1 == d2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
     strrchr: ||
  ft_strrchr: |there is so |

[fail]: your strrchr does not work with empty string
Test code:
	char *src = "\0";
	char *d1 = strrchr(src, 'a');
	char *d2 = ft_strrchr(src, 'a');

	if (d1 == d2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
     strrchr: |(null)|
  ft_strrchr: ||

ft_strstr:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strnstr:    [OK] [OK] [FAILED] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
[fail]: your strnstr does not work with basic input
Test code:
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = strlen(s2);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);

	if (i1 == i2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
     strnstr: |(null)|
  ft_strnstr: |MZIRIBMZE123|

ft_strcmp:     [OK] [OK] [OK] [OK] [OK] [OK] [FAILED] [FAILED] [FAILED] [OK] [OK] [OK] 
[fail]: your strcmp does not work with zero length string
Test code:
	char *s1 = "";
	char *s2 = "AAAAAA";
	int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
	int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));

	if (i1 == i2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
      strcmp: |-1|
   ft_strcmp: |0|

[fail]: your strcmp does not cast in unsigned the diff
Test code:
	char *s1 = "\0";
	char *s2 = "\200";
	int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
	int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));

	if (i1 == i2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
      strcmp: |-1|
   ft_strcmp: |0|

[fail]: your strcmp does not work with non ascii chars
Test code:
	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	char *s2 = "\x12\x02";
	int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
	int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));

	if (i1 == i2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
      strcmp: |1|
   ft_strcmp: |-1|

ft_strncmp:    [OK] [OK] [OK] [OK] [OK] [OK] [FAILED] [OK] [OK] [FAILED] [OK] [OK] [OK] 
[fail]: your strncmp does not cast in unsigned char the diff
Test code:
	char *s1 = "\200";
	char *s2 = "\0";
	int i1 = ((strncmp(s1, s2, 1) > 0) ? 1 : ((strncmp(s1, s2, 1) < 0) ? -1 : 0));
	int i2 = ((ft_strncmp(s1, s2, 1) > 0) ? 1 : ((ft_strncmp(s1, s2, 1) < 0) ? -1 : 0));

	if (i1 == i2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
     strncmp: |1|
  ft_strncmp: |-1|

[fail]: your strncmp does not work with non ascii chars
Test code:
	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	char *s2 = "\x12\x02";
	size_t size = 6;
	int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : ((strncmp(s1, s2, size) < 0) ? -1 : 0));
	int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : ((ft_strncmp(s1, s2, size) < 0) ? -1 : 0));

	if (i1 == i2)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
     strncmp: |1|
  ft_strncmp: |-1|

ft_atoi:       [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [KO] [KO] [OK] 
[KO]: your atoi does not work with over long max value
Test code:
	char n[40] = "99999999999999999999999999";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

	if (i1 == i2)
		exit(TEST_SUCCESS);
	exit(TEST_KO);

Diffs:
        atoi: |-1|
     ft_atoi: |-469762049|

[KO]: your atoi does not work with over long min value
Test code:
	char n[40] = "-99999999999999999999999999";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

	if (i1 == i2)
		exit(TEST_SUCCESS);
	exit(TEST_KO);

Diffs:
        atoi: |0|
     ft_atoi: |469762049|

ft_isalpha:    [OK] 
ft_isdigit:    [OK] 
ft_isalnum:    [OK] 
ft_isascii:    [OK] 
ft_isprint:    [OK] 
ft_toupper:    [OK] 
ft_tolower:    [OK] 
ft_memalloc:   [OK] [FAILED] [FAILED] [OK] [OK] 
[fail]: your memalloc does not set allocated mem to 0
Test code:
	size_t size = 514;
	char *cmp = malloc(size);
	int diff;

	char *ret = ft_memalloc(size);
	bzero(cmp, size);
	if ((diff = memcmp(cmp, ret, size)))
	{
		exit(TEST_FAILED);
	}
	free(ret);
	exit(TEST_SUCCESS);

Diffs:
    memalloc: |0|
 ft_memalloc: |-65|

[fail]: your memalloc does not return null for too big value
Test code:
	char *ret = ft_memalloc((9223372036854775807L *2UL+1UL));

	if (!ret)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
    memalloc: |0x0|
 ft_memalloc: |0x7fe174500050|

ft_memdel:     [OK] [OK] {not protected}
ft_strnew:     [OK] [FAILED] [OK] [OK] 
[fail]: your strnew does not set allocated mem to 0
Test code:
	size_t size = 514;

	char *ret = ft_strnew(size);
	for (size_t i = 0;i < size + 1;i++)
		if (ret[i] != 0)
		{
			exit(TEST_FAILED);
		}
		free(ret);
		exit(TEST_SUCCESS);

Diffs:
      strnew: |0|
   ft_strnew: |65|

ft_strdel:     [OK] [OK] {not protected}
ft_strclr:     [OK] {not protected}
ft_striter:    [OK] [OK] {not protected}
ft_striteri:   [CRASH] [CRASH] {not protected}
[crash]: your striteri does no work
Test code:
	char b[] = "override this !";
	char b2[0xF0];
	size_t size = strlen(b);

	for (size_t i = 0; i < size; i++)
		f_striteri(i, b2 + i);
	b2[size] = 0;
	ft_striteri(b, f_striteri);
	if (!strcmp(b, b2))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


[crash]: your striteri crash cause it read too many bytes !
Test code:
	const size_t size = 10;
	char *b = electric_alloc(size);

	__builtin___strcpy_chk (b, "123456789", __builtin_object_size (b, 2 > 1 ? 1 : 0));
	ft_striteri(b, f_striteri);
	exit(TEST_SUCCESS);


ft_strmap:     [FAILED] [FAILED] [FAILED] [OK] [OK] {not protected}
[fail]: your strmap does not work
Test code:
	char *b = "override this !";
	char b2[0xF0];
	size_t size = strlen(b);

	for (size_t i = 0; i < size; i++)
		b2[i] = f_strmap(b[i]);
	b2[size] = 0;
	char *ret = ft_strmap(b, f_strmap);
	if (!strcmp(b2, ret))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
      strmap: |‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡|
   ft_strmap: |v}lyypkl'{opz'(|

[fail]: your strmap did not set \0 at the end of the string
Test code:
	char *b = "override this !";
	char b2[0xF0];
	size_t size = strlen(b);

	for (size_t i = 0; i < size; i++)
		b2[i] = f_strmap(b[i]);
	b2[size] = 0;
	char *ret = ft_strmap(b, f_strmap);
	if (!memcmp(b2, ret, size + 1))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

Diffs:
      strmap: |v}lyypkl'{opz'(|
   ft_strmap: |‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡A|

[fail]: your strmap does not malloc ?
Test code:
	char *b = "override this !";
	char b2[0xF0];
	size_t size = strlen(b);

	for (size_t i = 0; i < size; i++)
		b2[i] = f_strmap(b[i]);
	b2[size] = 0;
	fd_to_buffer(1);
	char *newstr = ft_strmap(b, f_strmap);
	if (!strcmp(newstr, b2))
		exit(TEST_SUCCESS);
	free(newstr);
	write(1, "", 1);
	write(1, "", 1);
	get_fd_buffer(1, ((void *)0), 0);
	exit(TEST_FAILED);

Diffs:
      strmap: |v}lyypkl'{opz'(|
   ft_strmap: |‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡|

ft_strmapi:    [CRASH] [CRASH] [CRASH] [CRASH] [OK] {not protected}
[crash]: your strmapi does not work
Test code:
	char *b = "override this !";
	char b2[0xF0];
	size_t size = strlen(b);

	for (size_t i = 0; i < size; i++)
		b2[i] = f_strmapi(i, b[i]);
	b2[size] = 0;
	char *ret = ft_strmapi(b, f_strmapi);
	if (!strcmp(b2, ret))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


[crash]: your strmapi does not malloc ?
Test code:
	char *b = "override this !";
	char b2[0xF0];
	size_t size = strlen(b);

	for (size_t i = 0; i < size; i++)
		b2[i] = f_strmapi(i, b[i]);
	b2[size] = 0;
	fd_to_buffer(1);
	char *newstr = ft_strmapi(b, f_strmapi);
	if (!strcmp(newstr, b2))
		exit(TEST_SUCCESS);
	free(newstr);
	write(1, "", 1);
	write(1, "", 1);
	get_fd_buffer(1, ((void *)0), 0);
	exit(TEST_FAILED);


[crash]: your strmapi did not set \0 at the end of the string
Test code:
	char *b = "override this !";
	char b2[0xF0];
	size_t size = strlen(b);

	for (size_t i = 0; i < size; i++)
		b2[i] = f_strmapi(i, b[i]);
	b2[size] = 0;
	char *ret = ft_strmapi(b, f_strmapi);
	if (!memcmp(b2, ret, size + 1))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


[crash]: your strmapi does not allocate the good size so the \0 test may be false
Test code:
	char *b = "override this !";
	size_t size = strlen(b);
	size_t alloc_size;

	ft_strmapi(b, f_strmapi);
	alloc_size = get_last_malloc_size();
	if (alloc_size == size + 1)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


ft_strequ:     [OK] [OK] [OK] [OK] {not protected}
ft_strnequ:    [OK] [OK] [OK] [OK] {not protected}
ft_strsub:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] {not protected}
ft_strjoin:    [CRASH] [CRASH] [CRASH] [OK] [CRASH] {not protected}
[crash]: your strjoin does not work with basic input
Test code:
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);

	if (!strcmp(res, "my favorite animal is the nyancat"))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


[crash]: your strjoin does not allocate the memory
Test code:
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *tmp = ft_strjoin(s1, s2);
	char *res = ft_strjoin(tmp, s3);

	free(tmp);
	if (!strcmp(res, "my favorite animal is the nyancat"))
	{
		free(res);
		exit(TEST_SUCCESS);
	}
	free(res);
	exit(TEST_FAILED);


[crash]: your strjoin does not work with overlap input
Test code:
	char *s1 = "my favorite animal is ";
	char *s2 = s1 + 20;
	char *res = ft_strjoin(s2, s1);

	if (!strcmp(res, "s my favorite animal is "))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


[crash]: your strjoin does not set \0 to the end of the string
Test code:
	char *s1 = "where is my ";
	char *s2 = "malloc ???";
	char *s3 = "where is my malloc ???";

	char *res = ft_strjoin(s1, s2);
	if (!strcmp(res, s3))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


ft_strtrim:    [CRASH] [CRASH] [CRASH] [CRASH] [CRASH] [CRASH] [CRASH] [CRASH] [CRASH] {not protected}
[crash]: your strtrim does not work with basic input
Test code:
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1);

	if (!strcmp(ret, s2))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


[crash]: your strtrim does not work with basic input
Test code:
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1);

	if (!strcmp(ret, s2))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


[crash]: your strtrim does not work with basic input
Test code:
	char *s1 = "Hello \t  Please\n Trim me !";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1);

	if (!strcmp(ret, s2))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


[crash]: your strtrim does not work with full blank input
Test code:
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1);

	if (!strcmp(ret, s2))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


[crash]: your strtrim does not work with empty input
Test code:
	char *s1 = "";
	char *s2 = "";
	char *ret = ft_strtrim(s1);

	if (!strcmp(ret, s2))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


[crash]: your strtrim did not allocate the good size so the \0 test may be false
Test code:
	char *s1 = "\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	int r_size = strlen(s2);
	int size;

	ft_strtrim(s1);
	size = get_last_malloc_size();
	if (size == r_size + 1)
		exit(TEST_SUCCESS);
	exit(TEST_KO);


[crash]: your strtrim does not allocate memory
Test code:
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1);

	if (!strcmp(ret, s2))
	{
		free(ret);
		exit(TEST_SUCCESS);
	}
	free(ret);
	exit(TEST_FAILED);


[crash]: you dont protect your malloc return
Test code:
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";

	char *ret = ft_strtrim(s1);
	if (ret == ((void *)0))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);


[crash]: your strtrim does not set \0 to the end of the string
Test code:
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";

	char *ret = ft_strtrim(s1);
	if (!strcmp(s2, ret))
	{
		free(ret);
		exit(TEST_SUCCESS);
	}
	free(ret);
	exit(TEST_FAILED);


ft_strsplit:   [CRASH] [CRASH] [CRASH] [CRASH] [OK] [CRASH] [CRASH] [OK] [CRASH] {not protected}
[crash]: your strsplit does not work with basic input
Test code:
	char *s = "      split       this for   me  !       ";
	char **r = ft_strsplit(s, ' ');

	while (*r)
	{
		if (strcmp(*r, *ret))
		{
			exit(TEST_FAILED);
		}
		r++;
		ret++;
	}
	exit(TEST_SUCCESS);


[crash]: your strsplit does not work with full space string
Test code:
	char *s = "                  ";
	char **r = ft_strsplit(s, ' ');

	while (*r)
	{
		if (strcmp(*r, *ret))
		{
			exit(TEST_FAILED);
		}
		r++;
		ret++;
	}
	exit(TEST_SUCCESS);


[crash]: your strsplit does not work with one word
Test code:
	char *s = "                  olol";
	char **r = ft_strsplit(s, ' ');

	while (*r)
	{
		if (strcmp(*r, *ret))
		{
			exit(TEST_FAILED);
		}
		r++;
		ret++;
	}
	exit(TEST_SUCCESS);


[crash]: your strsplit does not work with one word
Test code:
	char *s = "olol                     ";
	char **r = ft_strsplit(s, ' ');

	while (*r)
	{
		if (strcmp(*r, *ret))
		{
			exit(TEST_FAILED);
		}
		r++;
		ret++;
	}
	exit(TEST_SUCCESS);


[crash]: your strsplit does not work with full string
Test code:
	char *s = "0 0 0 0 0 0 0 0 0";
	char **r = ft_strsplit(s, ' ');

	while (*r)
	{
		if (strcmp(*r, "0"))
		{
			exit(TEST_FAILED);
		}
		r++;
		ret++;
	}
	exit(TEST_SUCCESS);


[crash]: your strsplit does not work with basic input
Test code:
	char *s = "split  ||this|for|me|||||!|";
	int i = 0;
	char **r = ft_strsplit(s, '|');

	while (r[i])
	{
		if (strcmp(r[i], *ret))
		{
			exit(TEST_FAILED);
		}
		free(r[i]);
		i++;
		ret++;
	}
	free(r);
	exit(TEST_SUCCESS);


[crash]: your strsplit does not work with basic input
Test code:
	char *s = "      split       this for   me  !       ";

	char **r = ft_strsplit(s, ' ');
	while (*r)
	{
		if (strcmp(*r, *ret))
		{
			exit(TEST_FAILED);
		}
		r++;
		ret++;
	}
	exit(TEST_SUCCESS);


ft_itoa:       [MISSING]
ft_putchar:    [OK] [OK] [KO] 
[KO]: your putchar does not work with unicode
Test code:
	char buff[10];
	char buff2[10];
	int c = L'Ã¸';
	int len = 0;

	putwchart(c, &len, buff2);
	buff2[len] = 0;
	fd_to_buffer(1);
	ft_putchar(c);
	write(1, "", 1);
	get_fd_buffer(1, buff, 10);
	if (!strcmp(buff, buff2))
		exit(TEST_SUCCESS);
	exit(TEST_KO);

Diffs:
     putchar: |ø|
  ft_putchar: |Ã¸|

ft_putstr:     [OK] [OK] {not protected}
ft_putendl:    [OK] [OK] {not protected}
ft_putnbr:     [OK] [OK] [OK] [OK] [OK] 
ft_putchar_fd: [OK] [OK] [KO] 
[KO]: your putchar_fd does not work with unicode
Test code:
	char buff[10];
	char buff2[10];
	int c = L'Ã¸';
	int len = 0;

	putwchart(c, &len, buff2);
	buff2[len] = 0;
	fd_to_buffer(2);
	ft_putchar_fd(c, 2);
	write(2, "", 1);
	get_fd_buffer(2, buff, 10);
	if (!strcmp(buff, buff2))
		exit(TEST_SUCCESS);
	exit(TEST_KO);

Diffs:
  putchar_fd: |ø|
ft_putchar_fd: |Ã¸|

ft_putstr_fd:  [OK] [OK] {not protected}
ft_putendl_fd: [OK] [OK] {not protected}
ft_putnbr_fd:  [OK] [OK] [OK] [OK] [OK] 
