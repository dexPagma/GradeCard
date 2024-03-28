CC = gcc
CFLAGS = -Wall -Wextra -I.

SRCS = main.c marks.c
OBJS = $(SRCS:.c=.o)
HEADER = mk.h
EXECUTABLE = PES_Official_GradeCard

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	del $(EXECUTABLE) $(OBJS)