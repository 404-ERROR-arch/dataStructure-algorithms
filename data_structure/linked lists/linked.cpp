#include<iostream>
using namespace std;


int main(){

    class node{
        public:
        int data;
        node* next;
        node(){
            data = 0;
            next = NULL;
        }
    };

    class linked_list{

        public:
        node *head ;

        int get_node_size(){

            node *temp = head;

            if(temp!=NULL){
                int size =1;
                while(temp->next !=NULL){
                    temp = temp->next;
                    size ++;

                    
                }
                return size;

            }else{
                cout<<"list is empty"<<endl;
                return 0;
            }
        }
    
        void insert_element(){
            

            node *p = new node;
            node *temp = head;

            cout<<"Enter the position where you want to insert the element!"<<endl;
            cout<<"1: at the beginning\n 2: In the middle \n 3: at the end "<<endl;

            int value=0;
            cin>>value;

            int count = 0;
            int current_postion =0;
            int position;
            node *t = head;
            int size =0;
                
               
            node *pre_temp = temp;
            switch (value)
            {
            case 1:
                cout<<"enter the value :-"<<endl;
            cin>>p->data;

            if(head == NULL){
                head = p;
                cout<<"value has been inserted"<<endl;
            }else{
                

               
                p->next = head;
                head = p;
                cout<<"value has been inserted "<<endl;
            
            }
            temp = head;
             break;

             case 2:
                cout<<"enter the value :-"<<endl;
                cin>>p->data;
                
                cout<<"Enter the desirable postion where you want to insert it"<<endl;
                cin>>position;
                


                if(t->next != NULL){

                    count = get_node_size();
                    if(count<=position){
                        cout<<"position value is exceed to the size of nodes";
                        
                    }else{
                        while(temp->next !=NULL){
                            pre_temp = temp;

                            temp = temp->next;

                            if(current_postion == position-1){
                                break;
                            }
                            current_postion++;
                        }
                        p->next = pre_temp->next;
                        pre_temp->next = p;
                        cout<<"value has been inserted";

                    }
                    

                    

                    }
                    temp = head;
                    break;

                    case 3:
                       
                        size = get_node_size();
                        if(size>=1){
                            int x ; cout<<"enter the value:"<<endl;cin>>x;
                            p->data = x;
                            while(temp->next !=NULL){
                                temp =  temp->next;
                            }
                            temp->next = p;
                            cout<<"value has been inserted"<<endl;
                        }else{
                            cout<<"node is empty!"<<endl;
                        }
                        temp = head;
                        break;

                    
                default:
                cout<<"enter invalid intput";
                break;

                    
                }


            }

    
               
            
            
          

            

        void display(void){
            node * temp = head;

            if(temp == NULL){
                cout<<"list is empty";
                
            }else{
                while(temp->next!=NULL){
                    cout<<temp->data<<endl;
                    temp = temp->next;
                }
                cout<<temp->data<<endl;
                cout<<"this is special value"<<temp->data<<endl;

            }
        }

        auto delete_elements(){
            node *temp = head;
            if(temp == NULL){
                cout<<"the list is empty";
                return 0;
             }
            
            cout<<"Enter the position of element you want to delete"<<endl;
            int x, position ; cin>>x;
            position = get_node_size();
            if(position <x){
                cout<<"the element at that postions does not existe";
                return 0;

            }else{
                if(x == 1){
                    head = head->next;
                    delete temp;
                    cout<<"value has been deleted";
                    return 1;


                }else if(position>1){
                    int count =1 ;
                    node * prev_node = temp;
                    while(count!=x){
                        prev_node = temp;
                        temp = temp->next;
                        count++;

                    }
                    prev_node->next = temp->next;
                    delete temp;
                    cout<<"value has been deleted"<<endl;
                    return 1;
                }
            }

        }
        linked_list(){
            head = NULL;
        }

    };


    linked_list n1;
    for(int i=0;i!=4;i++)
    n1.insert_element();

    n1.display();
    cout<<endl;

    for(int i =0; i!=3;i++)
    n1.delete_elements();

    cout<<endl;
     n1.display();
    cout<<endl;










}