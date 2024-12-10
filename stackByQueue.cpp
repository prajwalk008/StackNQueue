#include <bits/stdc++.h>
using namespace std;

class mystack{
    queue<int> q;
    int size;

    public:
    mystack(){
        size=0;
    }
    
    void push(int x){
        if(size==0){
            q.push(x);
            size++;
        }
        else{
            q.push(x);
            int i=size;
            while(i--){
                int y= q.front();
                q.pop();
                q.push(y);
            }
            size++;

        }
    }

    void pop(){
        if(size==0){
            cout<<"Queue is empty!";
        }
        else{
            int y= q.front();
            q.pop();
            cout<<y<<" popped!"<<endl;
            size--;
        }
    }

    void numberOfEles(){
        cout<<"Total elements in stack= "<<size<<endl;
    }

    void top(){
        cout<<"Top element: "<<q.front()<<endl;
    } 

};

int main() {
    mystack st;
    st.push(4);
    st.push(9);
    st.push(2);
    st.push(5);
    st.top();
    st.pop();
    st.pop();
    st.top();
    st.push(1);
    st.top();



}