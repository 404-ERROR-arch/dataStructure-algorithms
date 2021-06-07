#include<iostream>
using namespace std;

template<class x>
class node{
    public:
    x data;
    node * next;

    public:
    node(x data){
        this->data = data;
        next = nullptr;

    }
};
template<class y>
class list{
    private:
    node<y> *head = nullptr;
    int top = -1;


   

      
        
 
    public:
    void push_back(y data){
      
        node<y> *p = new node<y>(data);
        
        
        if(head == nullptr){
            head = p;
            top++;
        }else{
            node<y> *temp = head;
            while(temp->next != nullptr)
                    temp = temp->next;
            temp->next = p;
            top++;

        }

    }
    y pop_back(){
        if(top == -1){
            cout<<"under flow";
            return -1;
        
        }else if(head->next == nullptr){
            y temp = head->data;
            head = nullptr;
            top--;
            return temp;
        }

        node<y> *temp=head, *pre = head;
        while(temp->next !=nullptr){
                pre = temp;
              temp = temp->next;
              }
              pre->next = nullptr;
              return temp->data;
              top--;

    }

};
int main(){
    list<char> l;
    l.push_back('p');
    l.push_back('r');
    l.push_back('o');

    cout<<l.pop_back();
    cout<<l.pop_back();
    cout<<l.pop_back();
    
}