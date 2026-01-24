CXX      = g++
CXXFLAGS = -Wall -Wextra -std=c++17

SRCS := $(wildcard *.cpp)
BINS := $(SRCS:.cpp=.exe)

all: $(BINS)

%.exe: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	del /Q *.exe 2>nul

