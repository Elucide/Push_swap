SRCS		=	main.c				\
				ft_lstadd_back.c	\
				ft_lstadd_front.c	\
				ft_lstdelone.c		\
				ft_lstlast.c		\
				ft_lstnew.c			\
				ft_lstsize.c		

NAME		=	push_swap

OBJ			=	$(SRCS:.c=.o)

DEP			= 	$(SRCS:%.c=%.d)

all			:	$(NAME)

$(NAME)		:	$(OBJ)
				gcc -Wall -Wextra -Werror -MP -MMD -o $@ $^ 
clean		:
				rm -f $(OBJ)
				rm -f $(DEP)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all

-include $(DEP)

.PHONY		:	all clean norme fclean re

