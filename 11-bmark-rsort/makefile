
ENAME = rsort
COMMON_DIR = ../common
OUTPUT_DIR = ./output
DUMP_DIR = ./dump
LOG_DIR = ./log

SRCS = $(ENAME).c $(COMMON_DIR)/syscalls.c 

CFLAGS =  -O2  -std=gnu99 #-Wall
CC = riscv64-unknown-elf-gcc 
OBJDUMP = riscv64-unknown-elf-objdump
CFLAGS +=  -mcmodel=medany -static  -ffast-math -fno-common -fno-builtin-printf
LKFLAGS = -mcmodel=medany -T $(COMMON_DIR)/ls.ld  -nostdlib -nostartfiles -ffast-math 
SRCS += 
OBJS = crt.o
OBJS += $(patsubst %.c, %.o, $(SRCS))

EXE = ../../emulator-rocketchip-DefaultConfig
#最大的执行时钟周期数
EXEOP = #+max-cycles=10000000     

LK = $(CC)    

default: $(ENAME)

$(ENAME): $(OBJS) 
	$(LK) $(LKFLAGS) $(OBJS)  -o $@
	mkdir -p $(DUMP_DIR)
	$(OBJDUMP) -d $(ENAME) > $(DUMP_DIR)/$@.txt
runlg:$(ENAME)
	mkdir -p $(OUTPUT_DIR)
	$(EXE)  +verbose $(ENAME) 3>&1 1>&2 2>&3 | /home/baochuquan/Desktop/MPRC-RISCV/riscv/bin/spike-dasm > $(OUTPUT_DIR)/$(ENAME).out
run:$(ENAME) 
	$(EXE) $(EXEOP)$<

$(ENAME).o: $(ENAME).c 
syscalls.o: $(COMMON_DIR)/syscalls.c $(COMMON_DIR)/encoding.h
util.o: util.c util.h
crt.o: $(COMMON_DIR)/crt.S $(COMMON_DIR)/encoding.h
	$(CC) $(CFLAGS) -D__ASSEMBLY__=1 -c  $< -o $@

clean:
	rm  $(OBJS) $(ENAME)
	
