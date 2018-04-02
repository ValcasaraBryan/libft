NAME = libft.a

EXE = executable

SRC = ft_*.c

OBJET = ft_*.o

HEAD = -I libft.h

FLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	gcc -c $(FLAG) $(HEAD) $(SRC)
	ar rc $(NAME) $(OBJET)
	ranlib $(NAME)

comp : $(NAME) main.c
	gcc $(NAME) main.c -o $(EXE)

exe : comp
	@./$(EXE)

debug : main.c
	cpp main.c

clean : $(OBJET)
	rm $(OBJET)

fclean : clean
	rm $(NAME)

re : fclean all
