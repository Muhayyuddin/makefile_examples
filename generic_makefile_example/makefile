# 'specify that the the name of the final executable will be run.out'
TARGET ?= run.out
# 'assigning name to the project directories'
BUILD_DIR ?= ./build
SRC_DIRS ?= ./src
INCLUDE_DIRS ?= ./include
# 'setting up the variables'
SRCS := $(shell find $(SRC_DIRS) -name *.cpp -or -name *.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(INCLUDE_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CPPFLAGS ?= $(INC_FLAGS) 
# 'building target'
$(BUILD_DIR)/$(TARGET): $(OBJS)
	g++ $(OBJS) -o $@  -lpthread 
# 'creating build folder and compiling cpp to obj files'
$(BUILD_DIR)/%.cpp.o: %.cpp 
	$(MKDIR_P) $(dir $@)
	g++ $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@
	
clean:
	$(RM) -r $(BUILD_DIR)

MKDIR_P ?= mkdir -p
