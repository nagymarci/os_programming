CC = gcc
CFLAGS = -O2 -g -ffreestanding -Wall -Wextra -v
INCLUDES = -Iembunit/ -I../kernel/include/ -I../libc/include/
#INCLUDES = $(foreach d, $(INCLUDE_DIRS), -I$d)
LIBS = embunit/lib
RM = rm
TARGET = testMyOS
OBJS = AllTests.o TestString.o TestStdLib.o itoa.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) -L$(LIBS) -lembUnit

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<

itoa.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@ -c ../libc/stdlib/itoa.c

clean:
	-$(RM) $(TARGET) $(OBJS)

.PHONY: clean all 
