NAME        = Array
CXX        = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -rf

SRCS        = main.cpp
OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)


%.o: %.cpp Array.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

