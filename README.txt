Travail sur ft_memccpy.c




Le fichier, copier une fuite de memoire dans destination.
Le probleme vient surement des conditions d'iteration.


ce qui est demande :
---
		source      = |test basic du memccpy !|
		destination = ||
		n           = 0
		c           = 22
---




libft-unit-test :

Test code:
        char src[] = "test basic du memccpy !";
        char buff1[22];

        __builtin___memset_chk (buff1, 0, sizeof(buff1), __builtin_object_size (buff1, 0));
        char *r1 = __builtin___memccpy_chk (buff1, src, 'm', 22, __builtin_object_size (buff1, 0));
        char *r2 = ft_memccpy(buff1, src, 'm', 22);
        if (r1 != r2)
                exit(TEST_FAILED);
        r1 = __builtin___memccpy_chk ("", src, 'm', 0, __builtin_object_size ("", 0));
        r2 = ft_memccpy("", src, 'm', 0);
        if (r1 != r2)
                exit(TEST_FAILED);
        exit(TEST_SUCCESS);

Diffs:
     memccpy: ||
  ft_memccpy: |test basic du m|






man memccpy :

DESCRIPTION
     The memccpy() function copies bytes from string src to string dst.  If the character c
     (as converted to an unsigned char) occurs in the string src, the copy stops and a
     pointer to the byte after the copy of c in the string dst is returned.  Otherwise, n
     bytes are copied, and a NULL pointer is returned.

     The source and destination strings should not overlap, as the behavior is undefined.