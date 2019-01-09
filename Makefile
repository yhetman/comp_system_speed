NAME = Lab

CC = g++

FLAGS = -Wall  -g

HEADER = template.hpp

OBJ = main.o histogram.o 
# template.o
SRCS = main.cpp histogram.cpp 
# template.cpp
all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ) 

$(OBJ): $(SRCS) $(HEADER) 
		$(CC) $(FLAGS) -c $(SRCS) $(HEADER)

template.o: template.h

clean:
	rm -rf $(OBJ)
	rm -rf *.gch

fclean: clean
	rm -f $(NAME)

re: fclean all