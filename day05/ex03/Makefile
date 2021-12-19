NAME		=	bureaucrat

SRCS		= 	main.cpp Bureaucrat.cpp Form.cpp \
				PresidentialPardonForm.cpp \
				RobotomyRequestForm.cpp \
				ShrubberyCreationForm.cpp \
				Intern.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	clang++
RM			=	rm -f
CXXFLAGS	=	-Wall -Werror -Wextra
INCLUDES	=	Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDES)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
