commit 994ebe5680174638c444c12ba307138130cb7344
Author: Bryan VALCASARA <brvalcas@e2r11p5.42.fr>
Date:   Tue Apr 24 18:23:09 2018 +0200

    ajout de lstdelone

diff --git a/ft_lstdelone.c b/ft_lstdelone.c
index 4547b52..3e4784c 100644
--- a/ft_lstdelone.c
+++ b/ft_lstdelone.c
@@ -12,11 +12,15 @@
 
 #include "libft.h"
 
-void	ft_lstdelone(t_list **alst, void(*del)(void *, size_t))
+void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
 {
 	t_list	*tmp;
 
 	tmp = *alst;
-	del(tmp->content, tmp->content_size);
-	tmp->content = NULL;
-}
\ No newline at end of file
+	if (alst)
+	{
+		del(tmp->content, tmp->content_size);
+		free(*alst);
+		*alst = NULL;
+	}
+}
diff --git a/ft_lstnew.c b/ft_lstnew.c
index 96b5c17..9423f90 100644
--- a/ft_lstnew.c
+++ b/ft_lstnew.c
@@ -18,15 +18,18 @@ t_list	*ft_lstnew(void const *content, size_t content_size)
 
 	if (!(tmp = malloc(sizeof(t_list))))
 		return (NULL);
-	tmp->next = NULL;
 	if (content)
 	{
-		tmp->content = ft_memalloc(content_size + 1);
+		if (!(tmp->content = ft_memalloc(content_size + 1)))
+			return (NULL);
 		ft_memcpy(tmp->content, content, content_size);
 		tmp->content_size = content_size;
-		return (tmp);
 	}
-	tmp->content = NULL;
-	tmp->content_size = 0;
+	else
+	{
+		tmp->content = NULL;
+		tmp->content_size = 0;
+	}
+	tmp->next = NULL;
 	return (tmp);
 }
diff --git a/main.c b/main.c
index 1f13b1a..22b3f79 100644
--- a/main.c
+++ b/main.c
@@ -12,7 +12,7 @@
 
 #include "libft.h"
 
-void	ft_del(void *content, size_t size)
+static	void	ft_del(void *content, size_t size)
 {
 	(void)size;
 	free(content);
@@ -20,14 +20,6 @@ void	ft_del(void *content, size_t size)
 
 int		main(void)
 {
-	t_list *list;
 
-	list = ft_lstnew("[salut]\n", 8);
-	ft_putstr("1 = ");
-	ft_putstr(list->content);
-	ft_lstdelone(&list, &ft_del);
-	ft_putstr("2 = ");
-	ft_putstr(list->content);
-	ft_putchar('\n');
 	return (0);
 }
\ No newline at end of file
