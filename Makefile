CXX = g++
CXXFLAGS = -std=c++17 -Wall
TARGET = main
SRC = main.cpp Student.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
