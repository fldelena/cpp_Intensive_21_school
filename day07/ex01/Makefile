NAME		=	Iter

SRCS		= 	main.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	clang++
RM			=	rm -f
CXXFLAGS	=	-Wall -Werror -Wextra
INCLUDES	=	iter.hpp

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDES)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
