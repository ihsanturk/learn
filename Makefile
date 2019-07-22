CC = cc
LIBS = -lGL -lGLU -lglut -lm
objects = building_circle draw_graph sin_wave

CFLAGS = -std=c99

install: $(objects)
$(objects): %: %.c
	$(CC) $(CFLAGS) $(LIBS) -o $@ $<

clean:
	rm -rf $(objects)
