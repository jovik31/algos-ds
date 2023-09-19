package main

import "time"

type Book struct {
	title    string
	author   string
	numPages int

	isSaved bool
	savedAT time.Time
}
func (book *Book) saveBook2(){

	book.isSaved = true
	book.savedAT = time.Now()
}

func saveBook(book *Book){

	book.isSaved = true
	book.savedAT = time.Now()

}
// 1. read data
// 2. write data

func main() {


}