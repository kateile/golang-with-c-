package main

import "C"

//export getHelloWord
func getHelloWord(number int) int {
	return 7888 * number
}

func main() {

}
