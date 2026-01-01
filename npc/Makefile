all:
	@echo "Write this Makefile by your self."
WORK_DIR  = $(shell pwd)
VSRCS = $(shell find ./vsrc  -name "*.v" -or -name "*.sv")
VSRCS += $(shell find ../ysyxSoC/perip -name "*.v")
VSRCS += ../ysyxSoC/ready-to-run/D-stage/ysyxSoCFull.v
CSRCS = $(shell find ./csrc  -name "*.c" -or -name "*.cc" -or -name "*.cpp")
INC_PATH += $(WORK_DIR)/csrc/include
INCFLAGS += $(addprefix -I, $(INC_PATH))

INC_PATH_VER += ../ysyxSoC/perip/uart16550/rtl ../ysyxSoC/perip/spi/rtl
INCFLAGS_VER += $(foreach v,$(INC_PATH_VER),-I$(v))

#CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
CXXFLAGS += $(INCFLAGS) #-DTRACE #I/usr/lib/llvm-14/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS

TOP_NAME = ysyxSoCFull#-------------------top_name
EX_CMD := $(addprefix ./obj_dir/V, $(TOP_NAME))

LIBS += -lreadline $(shell llvm-config --libs)
#LIBS += $(shell llvm-config --libs)


LIB := $(foreach a,$(LIBS),-LDFLAGS $(a))
FLAGS := $(foreach b,$(CXXFLAGS),-CFLAGS $(b))
sim:
	
# 	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo $(VSRCS)
	verilator --trace --cc --exe --build --autoflush $(INCFLAGS_VER) --timescale "1ns/1ns" --no-timing --Wno-WIDTHEXPAND\
    --top-module $(TOP_NAME) \
    $(CSRCS) $(VSRCS) \
	$(LIB) $(FLAGS)
 
 IMG ?= ../ysyxSoC/ready-to-run/D-stage/new.bin
#  IMG ?= /home/derek/下载/ysyx-workbench/am-kernels/tests/am-tests/build/amtest-minirv-npc.bin
run: sim
	$(EX_CMD) $(ARGS) $(IMG)
	#rm -rf obj_dir
# 	#rm waveform.vcd
 
clean:
	rm -rf obj_dir
# 	rm waveform.vcd
 
 
 
include ../Makefile
