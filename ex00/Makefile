
NAME	= megaphone

CC		= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98

SRC		= megaphone.cpp

OBJ = $(SRC:%.c=%.o)

all		: $(NAME)

$(NAME)	: $(OBJ)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean	:
	rm -rf $(NAME)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all