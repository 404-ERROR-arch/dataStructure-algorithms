#include<iostream>
using namespace std;

class queue{
    private:

    int top , front,size = 10;
    int *arr = new int[size];



    void shift_arr(){
        for(int i=0;i<front;i++){
            arr[i] = arr[i+1];

        }
        front--;
        
        if(front == -1){
            top = -1;
        }

    }

    public:

    bool is_empty(){
        return top == -1;
    }

    bool is_full(){
        return front == (size -1);
    }

    void push_back(int data){

        if(is_empty()){
            arr[++front] = data;
            top++;
        }else if(!is_full()){
            arr[++front] = data;
        }else{
            cout<<"overflow\n";
        }


    }
    

    int pop(){
        int data;
        if(is_empty()){
            cout<<"underflow\n";
            return 0;
        }else{
            data = arr[top];
            shift_arr();
            return data;
            
        }
    }

    

    queue(int size){
        this->size = size;
        top = -1;
        front = -1;


    }

    queue(){
        top = -1;
        front = -1;
    }

    




};
int main(){

    queue q1;

    for(int i=0;i<12;i++)
     q1.push_back(i);

     for(int i=0;i<12;i++)
     cout<<q1.pop()<<endl;





}