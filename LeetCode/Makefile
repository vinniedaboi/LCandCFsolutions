# Compiler and compiler flags
CXX = g++
CXXFLAGS = -std=c++17

# Source file and target binary
SRC = main.cpp
TARGET = main

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $<

# Clean rule
clean:
	rm -f $(TARGET)