CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES= \
main.cpp \
helper_objs.cpp

OBJECTS=$(SOURCES:.cpp=.o)
SOURCES_OLD=$(SOURCES:.cpp=.cpp~)
EXECUTABLE=out

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean: 
	rm $(OBJECTS) $(EXECUTABLE) $(SOURCES_OLD) 
