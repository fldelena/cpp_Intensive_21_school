NAME		=	zomb

SRCS		= 	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	clang++
RM			=	rm -f
CXXFLAGS	=	-Wall -Werror -Wextra


all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
