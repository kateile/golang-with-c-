package main

import "C"

//export getHelloWord
func getHelloWord(name string) string {
	return "Hello world from " + name
}

func main() {

}
