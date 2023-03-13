CC = gcc
# CFLAGS += -Wall -Wextra -Werror
LINKERFLAG = -lm
SOURCES = my_mastermind.c
OBJECTS = $(SOURCES: .c=.o)
TARGET = my_mastermind

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
	


.PHONY: clean fclean re

clean: 
	@rm -f $(TARGET)

fclean: 
	@rm $(TARGET)
	$(clean) 

re: $(fclean) 
	$(MAKE)
