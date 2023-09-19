#include<iostream>


struct Node {


    int data;
    struct Node *next;

};

class linked_list {

    private:
        Node *head, *tail;
    public:
        linked_list(){
            head = nullptr;
            tail = nullptr;
        }
        void add_node(int n){
            Node *tmp = new Node;
            tmp->data = n;
            tmp->next = nullptr; 
            if(head==nullptr){

                head=tmp;
                tail=tmp;
            }
            else{
                tail->next = tmp;
                tail = tail->next;
            }
        }
        void display_list(){

            Node *current = head;

            while(current!= nullptr){
            std::cout<<current->data<<std::endl;
            current = current->next;
            }
        }
        void inverse_list(){
           Node *current = head;
           Node *prev = nullptr, *next = nullptr;
           while(current != nullptr){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
           }
           head = prev;
        }
};

int main(){

    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.display_list();
    a.add_node(3);
    a.add_node(4);
    a.add_node(5);
    a.inverse_list();
    a.display_list();
    
}