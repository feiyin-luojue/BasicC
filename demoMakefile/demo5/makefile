# 生成静态库
OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET=libMyAdd.a

.PHONY: $(TARGET)

$(TARGET):$(OBJ)
	$(AR) -r $@ $^

%.o:%.c
	$(CC) -c $^ -o $@

clean:
	$(RM) $(OBJ) $(TARGET)

show:
	@echo $(AR)
	@echo $(RM)
	@echo $(CC)
	@echo $(CXX)
	@echo $(wildcard ./*.c)
	@echo $(patsubst %.c, %.o, $(wildcard ./*.c))
