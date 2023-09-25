package main    

import("fmt")

func main(){
    y:= []int{1,2,3,4,4,5,6,6}
    x:= 6
    fmt.Println(removeElements(&y,x))
    fmt.Printf("Done changing the slice by reference")
}
