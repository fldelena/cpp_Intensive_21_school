NAME		=	animolz

SRCS		= 	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	clang++
RM			=	rm -f
CXXFLAGS	=	-Wall -Werror -Wextra
INCLUDES	=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDES)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
