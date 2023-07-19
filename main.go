package main

/*
#cgo CFLAGS: -I./dllmain/
#cgo LDFLAGS: -L./dllmain/ -ltest
#include "testlib.h" //非标准c头文件，所以用引号
void cbfCallback();
*/
import "C"
import "fmt"

func Hello() {
	C.hello()
}

func Create() {
	C.create(C.Cbf(C.cbfCallback))
}

func Connect() {
	C.connect()
}

//export cbfCallback
func cbfCallback(a C.int) {
	Cbk(int32(a))
}

func Cbk(a int32) {
	fmt.Print(a)
}

func main() {
	Hello()
	Create()
	Connect()
}
