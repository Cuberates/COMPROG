TARGET_BASE = book_shop

EXTESION = .o
CC = g++
CF_FLAGS = -Wall -g -std=c++20 -o

# TARGET = $(addsuffix $(EXTENSION), $(TARGET_BASE))
TARGET = $(TARGET_BASE).o

all:
	$(CC) $(CF_FLAGS) $(TARGET) $(TARGET_BASE).cpp 
run:
	./$(TARGET)
clean:
	rm -r -f $(TARGET)
