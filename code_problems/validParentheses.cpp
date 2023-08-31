#include<stack>
#include<string>
#include<iostream>


/*Note: 
        " " -> is a String representation in C++
        ' ' -> is a multi character representation in C/C++
            Only useful to interpret error codes when evaluation '' into numbers */

 std::string isValid(std::string s){

    std::stack<char> pchecker;

    for(auto i : s){

        if (i=='(' || i=='{' || i=='['){

            pchecker.push(i);
        }

        else 
        {
            if(!pchecker.empty()){

                if(pchecker.top() =='(' && i ==')' || pchecker.top() =='{' && i =='}' || pchecker.top() =='[' && i ==']'){

                    pchecker.pop();
                } 
                else{

                    return "false";
                }
            }
            else
                return "false";            
        }  
    } 
    if (pchecker.empty())
        return "true";
    else 
        return "false";
}


int main(int argc, char* argv[]){

    std::string result = isValid(argv[1]);
    std::cout << result;

    return 0;
    
}