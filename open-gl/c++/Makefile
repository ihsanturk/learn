CC = cc
CPP = g++
LIBS = -lglfw -lGL
TARGETS = 1.window_and_triangle 2.bouncing_square 3.ease_animation

all: $(TARGETS)

clean:
	rm -f $(TARGETS)

1.window_and_triangle: 1.window_and_triangle.cpp
	$(CPP) $@.cpp -o $@ ${LIBS}

2.bouncing_square: 2.bouncing_square.cpp
	$(CPP) $@.cpp -o $@ ${LIBS}

3.ease_animation: 3.ease_animation.cpp
	$(CPP) $@.cpp -o $@ ${LIBS}
