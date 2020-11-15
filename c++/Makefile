CC = cc
CPP = g++

CFLAGS = -std=c99
CPPFLAGS = -std=c++11

cppObjects = long_numbers
cObjects = long_numbers

cpp: $(cppObjects)
$(cppObjects): %: %.cpp
	$(CPP) $(CPPFLAGS) -o "${@}cpp" $<

c: $(cObjects)
$(cObjects): %: %.c
	$(CC) $(CFLAGS) -o "${@}c" $<
