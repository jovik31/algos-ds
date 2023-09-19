package main

type Stack []int

func (stck *Stack) Push(i int) {

	*stck = append(*stck, i)

}
func isEmpty(stck *Stack) bool {

	return len(*stck) == 0
}

func (stck *Stack) Pop() int {

	if isEmpty(stck) {
		return 0
	}
	top := (*stck)[len(*stck)-1]
	*stck = (*stck)[:len(*stck)-1]
	return top
}
