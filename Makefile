.PHONY: default log run build prepare clean

INCLUDES := .

CC       := gcc
CFLAGS   := `pkg-config --cflags $(INCLUDES)`

ASM      := as
ASMFLAGS := 

AR       := ar
ARFLAGS  := rcs

SRC_DIR  := Source/
OUT_DIR  := Bin/
TMP_DIR  := Temp/
OBJ_DIR  := $(TMP_DIR)Object/

TARGET   := libgxstl.a

SSRC     := $(shell find $(SRC_DIR) -name '*.S')
CSRC     := $(shell find $(SRC_DIR) -name '*.c')

OBJS     := $(CSRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.c.o) $(SSRC:$(SRC_DIR)%.S=$(OBJ_DIR)%.S.o)

CPY      := cp -r
MKD      := mkdir -p
DEL      := rm -fr

default: build

log:
	@echo INCLUDES "= $(INCLUDES)"
	@echo CC "      = $(CC)"
	@echo CFLAGS "  = $(CFLAGS)"
	@echo ASM "     = $(ASM)"
	@echo ASMFLAGS "= $(ASMFLAGS)"
	@echo AR "      = $(AR)"
	@echo ARFLAGS " = $(ARFLAGS)"
	@echo SRC_DIR " = $(SRC_DIR)"
	@echo OUT_DIR " = $(OUT_DIR)"
	@echo TMP_DIR " = $(TMP_DIR)"
	@echo OBJ_DIR " = $(OBJ_DIR)"
	@echo TARGET "  = $(TARGET)"
	@echo SSRC "    = $(SSRC)"
	@echo CSRC "    = $(CSRC)"
	@echo OBJS "    = $(OBJS)"
	@echo CPY "     = $(CPY)"
	@echo MKD "     = $(MKD)"
	@echo DEL "     = $(DEL)"

run: build
	@echo "Execution is not supported for static libraries."

build: prepare $(OUT_DIR)$(TARGET)
	$(CPY) $(TMP_DIR)$(OUT_DIR) .

prepare:
	$(MKD) $(TMP_DIR)
	$(MKD) $(OBJ_DIR)
	$(MKD) $(TMP_DIR)$(OUT_DIR)
	$(MKD) $(OUT_DIR)

clean:
	$(DEL) $(TMP_DIR) $(OBJ_DIR) $(OUT_DIR)

$(OUT_DIR)$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $(OUT_DIR)$(TARGET) $(OBJS)

$(OBJ_DIR)%.c.o: $(SRC_DIR)%.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(OBJ_DIR)%.S.o: $(SRC_DIR)%.S
	$(ASM) $(ASMFLAGS) $^ -o $@