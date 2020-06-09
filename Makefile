CXX 	 = g++-9
CXXFLAGS = -std=c++17
DEBFLAGS = -Wall -g3
OBJS     = $(patsubst %.cpp, %.o, $(wildcard */*.cpp))
PROGRAM  = main

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(PROGRAM)

clean:; rm -f *.o */*.o *~ $(PROGRAM)
