#include<iostream>
using namespace std;

template <class x>
class stack{
    int top = -1;
    x *array = new x[1];
    int size = 0;

   void resize_array(){
        x *new_array = new x[size+1];
        copy(array, array+size, new_array);
        delete[] array;
        array = new_array;


    }
    public:
     void push_back(x data){
         if(top==-1){
             array[++top] = data;
             size++;

         }
         
         else if(top == size-1 ){
             resize_array();
             array[++top] = data;
             size++;
         }
         else{
             array[++top] = data;
         }
     }
    
    void pop_back(){
        if(top == -1){
            cout<<"underflow\n";
        }
        cout<<array[top--];
        cout<<'\n';
    }

};


int main(){

    stack<int> s;
    for(int i=0;i<1000;i++)
        s.push_back(i);

    

    for(int i=0;i<1000;i++)
        s.pop_back();



}