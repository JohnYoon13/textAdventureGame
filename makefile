CXX = g++
SRCS = Final.cpp Item.cpp Space.cpp Home.cpp Jungle.cpp Volcano.cpp City.cpp Desert.cpp Gold.cpp
HEADERS = Item.hpp Space.hpp Home.hpp Jungle.hpp Volcano.hpp City.hpp Desert.hpp Gold.hpp

main: ${SRCS} ${HEADERS}
	${CXX} ${SRCS} -o main

clean:
	rm main

