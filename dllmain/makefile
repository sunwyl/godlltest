COMP := g++     #  C写的动态库要用gcc编译

TARGET := libtest.so

#源文件
SRCS := testlib.cpp 

#.o文件
OBJS := testlib.o 

#将所有.o文件编译为目标文件    编译.so需要加 -shared -fPIC
all:$(OBJS) 
	
	$(COMP) $(SRCS) -fPIC -shared -o $(TARGET)

# make  clean
clean:
	$(RM) *.o $(TARGET)