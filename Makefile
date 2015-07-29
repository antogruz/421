# Declaration of variables
CC = g++
CC_FLAGS = -w

# File names
EXEC = main
TEST = test
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# Main Target
$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)

# Main Target
$(TEST): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TEST)


# To obtain object files
%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@

# To remove generated files
clean:
	rm -f $(EXEC) $(TEST) $(OBJECTS) *~ \#* *\# .\#*

