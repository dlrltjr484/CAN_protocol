CC              	= gcc

TARGET         		:= ../output/can_app
INC_DIR             += -I./
INC_DIR             += -I$(SRC_DIR)

CFLAGS_TEST         += -g
CFLAGS_TEST         += $(INC_DIR)

SRC_DIR				= ../src

CSRCS				:= can_main.c
CSRCS               += $(SRC_DIR)/can_controller.c
CSRCS               += $(SRC_DIR)/can_transceiver.c

# OBJS                := $(CSRCS:.c=.o)

all:
	${CC} $(CFLAGS_TEST) $(CSRCS) -o $(TARGET)

clean:
	rm -rf $(TARGET)
