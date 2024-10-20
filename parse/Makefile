NAME			:= cub3d

CC				:= cc
CFLAGS			:= -Wall -Wextra -Werror 

SRCS_B			:=	parse/parser.c
				
LIBFT_PATH		:=	libft/
LIBFT			:=	libft/libft.a

OBJS_B			:=	$(SRCS_B:.c=.o)

all:	$(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH)
	make -C $(LIBFT_PATH) bonus

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L $(LIBFT_PATH)  -o $(NAME)

clean:
	@make clean -C $(LIBFT_PATH)
	@rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	@rm -f $(NAME) $(BONUS)

re: fclean all

bonus:	re

.PHONY: clean