NAME = Base

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
	A.cpp \
	B.cpp \
	C.cpp \
	function.cpp \
	Base.cpp
	
HEADERS = A.hpp \
	B.hpp \
	C.hpp \
	function.hpp \
	Base.hpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
