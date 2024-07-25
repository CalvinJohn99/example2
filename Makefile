DEBUG := false

$(info DEBUG is $(DEBUG))

CXXFLAGS := -Wall -Wextra
DEBUG_CXXFLAGS := -fsanitize=address \
				-fsanitize=undefined \
				-g

ifeq ($(DEBUG),true)
CXXFLAGS += $(DEBUG_CXXFLAGS)
endif

main: main.cpp
	g++ $(CXXFLAGS) -o main main.cpp 

clean:
	rm main

.PHONY: release debug clean