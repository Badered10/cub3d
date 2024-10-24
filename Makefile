NAME			:= cub3d

CC				:= cc
CFLAGS			:= -Wall -Wextra -Werror 

SRCS			:=	parse/parser.c
GNL				:=	gnl/get_next_line.c gnl/get_next_line_utils.c
SRCS 			+= $(GNL)
				
LIBFT_PATH		:=	libft/
LIBFT			:=	libft/libft.a

OBJS			:=	$(SRCS:.c=.o)

all:	$(NAME)
$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS)  $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH)
	make -C $(LIBFT_PATH) bonus

clean:
	@make clean -C $(LIBFT_PATH)
	@rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	@rm -f $(NAME) $(BONUS)

re: fclean all

bonus:	re

.PHONY: clean