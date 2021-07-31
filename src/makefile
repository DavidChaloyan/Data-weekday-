export EXECUTABLE := start

export SOURCE_FILES := $(wildcard *.cpp)
export OBJ_FILES := $(patsubst %.cpp, %.o, $(SOURCE_FILES))

$(EXECUTABLE) : $(OBJ_FILES)
	g++ $^ -o ../bin/$@
%.o:%.cpp hider.hpp
	g++ -c $< -o $@
clean:
	rm *.o
