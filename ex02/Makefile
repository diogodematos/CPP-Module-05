NAME = Bureaucrat

SRC = Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp main.cpp\
	

CXX = c++ -g 
RM = rm -rf
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
AR = ar rcs

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
			@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) 
			
clean:
		@$(RM) $(OBJ)
		
fclean: clean
		@$(RM) $(NAME) $(wildcard *_shrubbery)
		
re: fclean all