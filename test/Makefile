C = gcc
CFLAGS = -O
INCLUDES = embunit/
LIBS = embunit/lib
RM = rm
TARGET = testMyOS
OBJS = AllTests.o TestString.o 

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) -L$(LIBS) -lembUnit

.c.o:
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $<

clean:
	-$(RM) $(TARGET) $(OBJS)

.PHONY: clean all 
