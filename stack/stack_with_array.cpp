#include<iostream>
#define maxsize  10
#include<algorithm>
#include<ctime>
using namespace std;

int main(){

class stack{
    private:
    int top = -1;
    int array[maxsize] = {0};

    public:
    stack(){
        int *a = array;
        fill(a, a+maxsize, 0);
    }

   void push_back(int data){
        if(top<maxsize-1){
            array[++top] = data;
        }else{
            cout<<"array overflow\n";
        }
    }

    void pop_back(){
        if(top != -1){
            cout<<array[top--]<<"\n";
            
        }else{
            cout<<"array underflow\n";
        }
    }

    int size(){
        return (top +1);

    }
    

};

 stack s;
 for(int  i = 0;i<11;i++)
 s.push_back((i*time(0))%100);

  

  

}