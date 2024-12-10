#include <bits/stdc++.h>
using namespace std;

class myQueue{
    stack<int> s1;
    stack<int> s2;

    int size;

    public:
    myQueue(){
        size=0;
    }

    void push(int x){
        if(s1.empty()){
            s1.push(x);
            size++;
        }
        else{
            while(!s1.empty()){
                int y= s1.top();
                s2.push(y);
                s1.pop();
            }

            s1.push(x);
            while(!s2.empty()){
                int y= s2.top();
                s1.push(y);
                s2.pop();
            }

            size++;
        }

        cout<<x<<" pushed!"<<endl;
    }

    void pop(){
        if(s1.empty()){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            int y=s1.top();
            s1.pop();

            cout<<y<<" poped!"<<endl;
            size--;
        }
        
    }

    void rear(){
        if(s1.empty()){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            while(!s1.empty()){
                int y= s1.top();
                s2.push(y);
                s1.pop();
            }

            cout<<"Rear: "<<s2.top()<<endl;

            while (!s2.empty())
            {
                int y= s2.top();
                s1.push(y);
                s2.pop();
            }
            

        }
    }

    void front(){
        if(s1.empty()){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            cout<<"Front: "<<s1.top()<<endl;
        }
    }

    void Eles(){
        cout<<"Size: "<<size<<endl;
    }
};

int main() {
    myQueue q;
    q.push(4);
    q.push(3);
    q.push(3);
    q.push(5);
    q.front();
    q.front();
    q.pop();
    q.push(1);
    q.pop();
    q.pop();
    q.pop();
    q.front();
    q.pop();


}