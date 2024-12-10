






//This is my Approach, which has O(n) time compl. for both push() and pop() op.
// We can optimise it!





#include <bits/stdc++.h>
using namespace std;

class myQueue{
    public:
    stack<int> s1;
    stack<int> s2;
    int size;

    
    myQueue(){
        size=0;
    }
    void printStack(){
        while(!s1.empty()){
            cout<<s1.top()<<" ";
            s1.pop();
        }
        cout<<endl;
        while(!s2.empty()){
            cout<<s2.top()<<" ";
            s2.pop();
        }

    }

    void push(int x){
        if(size==0){
            s1.push(x);
            s2.push(x);
            cout<<x<<" pushed"<<endl;
            size++;
        }
        else{
            s1.push(x);
            int i=size;
            vector<int> store;
            while(!s2.empty()){
                int y= s2.top();
                s2.pop();
                store.push_back(y);
            }
            s2.push(x);
            while(i>0){
                s2.push(store[i-1]);
                i--;
            }
            size++;
            cout<<x<<" pushed"<<endl;

        }
    }

    void pop(){
        if(size==0){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            int z= s2.top();
            s2.pop();
            size--;
            int i=size;
            vector<int> store;
            while(!s1.empty()){
                int y= s1.top();
                s1.pop();
                store.push_back(y);
            }
            i--;
            while(i>=0){
                s1.push(store[i]);
                i--;
            }
            cout<<z<<" poped"<<endl;
        }
    }

    void rear(){
        if(s1.empty()){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            cout<<s1.top()<<endl;
        }
        
    }
    void front(){
        if(s2.empty()){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            cout<<s2.top()<<endl;
        }
    }

    void Eles(){
        cout<<"Size= "<<size<<endl;
    }
};

int main() {
    myQueue q;
    q.push(4);
    q.push(2);
    q.push(3);
    q.push(5);

    q.rear();
    q.pop();
    q.pop();
    q.push(6);
    q.rear();
    q.front();

    q.printStack();
    q.printStack();
}