package main

import "C"
import (
	"fmt"
	"strconv"
)

//export getHelloWord
func getHelloWord(number int) int {
	var str = fmt.Sprintf("Hello world boy %s", strconv.Itoa(number))
	fmt.Println("number", number)
	fmt.Println("word", str)
	return 7888 * number
}

func main() {

}
