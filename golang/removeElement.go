package main


func removeElements(nums *[]int, val int) (int, []int) {

    l := 0

    for i := 0; i<len(*nums); i++ {
        if (*nums)[i] != val{
            l++
         }  else{*nums= append((*nums)[:i],(*nums)[i+1:]...)
            i--}

    }
    return l, *nums    
}

