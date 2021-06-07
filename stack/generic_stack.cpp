#include<iostream>
#define max 10
using namespace std;

template <class x>
    class stack{
        public:
        int top = -1;
        x array[max] ;

       void push_back(x data){
           array[++top] = data;
           cout<<"value has been inserted";
       }

    };


int main(){

    stack<string> s;
    s.push_back("prashant");
    

    

 


}