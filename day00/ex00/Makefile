NAME			= megaphone

SRCS			= megaphone.cpp

OBJS			= $(SRCS:.cpp=.o)


CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all claen fclean re

