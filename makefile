CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
CXXFLAGS += -v
LDFLAGS = -lboost_date_time

OBJS = main.o NewAnimal.o Animal.o Penguin.o Tiger.o Turtle.o Zoo.o

SRCS = main.cpp Animal.cpp NewAnimal.cpp Penguin.cpp Tiger.cpp Turtle.cpp Zoo.cpp

HEADERS = Animal.hpp NewAnimal.hpp Penguin.hpp Tiger.hpp Turtle.hpp Zoo.hpp

zoo: ${SRCS} ${HEADERS} 
	${CXX} ${LDFLAGS} ${SRCS} -o zoo

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm zoo
