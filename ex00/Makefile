CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = megaphone
SRCS = megaphone.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re

