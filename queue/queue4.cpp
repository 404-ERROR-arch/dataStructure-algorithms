#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node * next = nullptr ;

};

class linked_list{
    private:
    node * head = nullptr;

    public:
    node* create_node(){
        node *p = new node;

        return p;
    }

    void push_back(int data){
        node *p = create_node();
        p->data = data;

        if(head == nullptr){
            head = p;
        }else{
            node * temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = p;
        }

    }
    int pop(){

        if(head == nullptr){
            cout<<"underflow";
            return 0;
        }
        node *temp  = head;
        int data = head->data ;
        head = head->next;

        delete[] temp;
        return data;



    }
    int peek(){
        if(head == nullptr){
            cout<<"underflow";
            return 0;
        }
        else{
            return(head->data);
        }
    }

};

class queue{
    int top = -1;
    linked_list l;


    public:
    void push(int data){
        

        l.push_back(data);
        
        

    }
    int peek(){
        return(l.peek());
    }
    int pop(){
        return(l.pop());
    }





};





int main(){

queue q;
for(int i=1;i<1000;i++)
    q.push(i+4);

cout<<q.peek();




}