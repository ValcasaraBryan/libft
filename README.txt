commit 198cf06b764e7de34f3b54e05543e37899eb27db
Author: Bryan VALCASARA <brvalcas@e2r11p5.42.fr>
Date:   Tue Apr 24 16:14:59 2018 +0200

    fix de strnstr

diff --git a/Makefile b/Makefile
index 4e70b15..2bcd3d1 100755
--- a/Makefile
+++ b/Makefile
@@ -54,4 +54,4 @@ clean : $(OBJET)
 fclean : clean
 	@rm $(NAME)
 
-re : fclean all
+re : clean all
diff --git a/ft_strnstr.c b/ft_strnstr.c
index f23670f..75362cd 100755
--- a/ft_strnstr.c
+++ b/ft_strnstr.c
@@ -19,11 +19,8 @@ char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
 
 	i = 0;
 	j = 0;
-
-	s = (char *)needle;
-	find = (char *)haystack;
-	if (s[0] == '\0')
-		return (find);
+	if (needle[0] == '\0')
+		return ((char *)haystack);
 	while (len--)
 		if (needle[j] != haystack[i + j])
 		{
@@ -37,4 +34,4 @@ char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
 				return ((char *)&haystack[i]);
 		}
 	return (NULL);
-}
\ No newline at end of file
+}


!!!!!!!!!!!!! Dernier Commit important, d'abord pull avant tout commit !!!!!!!!!!!!!
!!!!!!!!!!!!! Dernier Commit important, d'abord pull avant tout commit !!!!!!!!!!!!!
!!!!!!!!!!!!! Dernier Commit important, d'abord pull avant tout commit !!!!!!!!!!!!!
!!!!!!!!!!!!! Dernier Commit important, d'abord pull avant tout commit !!!!!!!!!!!!!
!!!!!!!!!!!!! Dernier Commit important, d'abord pull avant tout commit !!!!!!!!!!!!!
!!!!!!!!!!!!! Dernier Commit important, d'abord pull avant tout commit !!!!!!!!!!!!!