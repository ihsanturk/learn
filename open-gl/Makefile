CC = cc
LIBS = -lGL -lGLU -lglut -lm
objects = main

CFLAGS = -std=c99

install: $(objects)

$(objects): %: %.c
	$(CC) $(CFLAGS) $(LIBS) -o $@ $<

clean:
	rm -rf $(objects)

run:
	./$(objects)
