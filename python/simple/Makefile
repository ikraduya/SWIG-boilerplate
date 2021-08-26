# standard compile options for the c++ executable
FLAGS = -fPIC

# the python interface through swig
PYTHONI = -I/usr/include/python3.6/
PYTHONL = -Xlinker -export-dynamic

# Library flags
$(LIBFLAGS)
LIBFLAGS = 

# default super-target
all: 
	g++ -fPIC -c example.cpp -o example.o
	swig -c++ -python -o example_wrap.cpp example.i 
	g++ $(FLAGS) $(PYTHONI) -c example_wrap.cpp -o example_wrap.o
	g++ $(PYTHONL) $(LIBFLAGS) -shared example.o example_wrap.o $(LIBFLAGS) -o _example.so