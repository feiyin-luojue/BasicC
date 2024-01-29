# 联合静态库生成可执行文件
TARGET=main
OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))
LDFALGS=-L./
LIBS=-lMyAdd

.PHONY:$(TARGET)

$(TARGET):$(OBJ)
	$(CC) $^ $(LDFALGS) $(LIBS) -o $@
# 发布
#	sudo cp $@ /usr/lib
	
# 模式匹配
%.o:%.c
	$(CC) -c $^ -o $@

clean:
	sudo $(RM) *.o $(TARGET)
	sudo $(RM) /usr/lib/$(TARGET)

show:
	@echo $(CC) -c $(wildcard ./*.c) -o $(patsubst %.c, %.o, $(wildcard ./*.c))