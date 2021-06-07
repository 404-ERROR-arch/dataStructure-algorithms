#include<iostream>
using namespace std;

template<class x>
class queue{
    private:
    int top = -1,front = -1;
    int size = 10;
    x *arr = new x[size];


    public:
   
    void push_back(x data){
        if(top == -1 and front == -1){
            arr[++top] = data;
            front++;
        }else if(front == size-1){
            cout<<"overflow\n";
            return ;
        }else{
            arr[++front] = data;
        }

    }
    
    

   
    

    x pop(){

        if(is_empty()){
            cout<<"underflow\n";
        
        }else
            return arr[top++];

    
        }

    bool is_empty(){
        return top == -1;
    }    

    x peek(){
        if(is_empty()){
            cout<<"underflow\n";
        }else{
            return arr[top];
        }
    }
        
        


        
    


    queue(int size){
        this->size = size;

    }

    queue(){

    }
    ~queue(){
        delete[] arr;
    }


};


int main(){
    queue<float> f;
    f.push_back(10.5);
    f.push_back(45.7);
    f.push_back(47.44);
    f.push_back(4.44);
    f.push_back(49.63);

    cout<<f.peek();
    cout<<f.pop();
    cout<<'\n';
    cout<<f.pop();

}