package main

import "C"
import "fmt"

//export HelloWord
func HelloWord() {
	fmt.Println("Hello world from golang")
}

func main() {

}
