COMPILER = g++
CPPFLAGS = -Wall

SRC = aitkGraphics.cpp universe.cpp shape.cpp
OBJ = ${SRC:.cpp=.o}

all: aitkGraphics


.cpp.o:
	${COMPILER} -c $<

aitkGraphics: ${OBJ}
	${COMPILER} -o $@ ${OBJ} -lm

install: all
	chmod +x ./aitkGraphics

uninstall:
	rm -f ./aitkGraphics

clean:
	rm -f *.o

.PHONY: all install clean
