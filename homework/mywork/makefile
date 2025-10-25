CXX = g++
CXXFLAGS = -std=c++17  -Wall -Wextra
LDFLAGS = -Llibs -lsqlite3


INCLUDE_DIR = include
SRC_DIR = src
BUILD_DIR = build

SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/db_wrapper.cpp
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

TARGET = $(BUILD_DIR)/todo

all: $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET) $(LDFLAGS)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
