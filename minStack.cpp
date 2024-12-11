#include <bits/stdc++.h>
using namespace std;

class minStack{
    stack<int> st;
    int mini;

    public:

    minStack(){
        mini=INT_MAX;
    }

    void push(int x){
        if(st.empty()){
            st.push(x);
            mini=min(mini,x);
        }
        else{
            if(x<mini){
                int newVal= 2*x-mini;

                st.push(newVal);

                mini=x;
            }
            else{
                st.push(x);
            }
        }

        cout<<x<<" pushed!"<<endl;
    }

    void pop(){
        if(st.empty()){
            cout<<"Stack is empty!"<<endl;
        }
        else{
            if(st.top()>=mini){
                int y= st.top();
                st.pop();
                cout<<y<<" poped!"<<endl;
            }
            else{
                int y= st.top();
                st.pop();

                int z= 2*mini-y;

                mini= z;

                cout<< (y+z)/2<<" poped!"<<endl;

            }  
        }
        
    }

    void top(){
        if(st.empty()){
            cout<<"Stack is empty!"<<endl;
        }
        else{
            if(mini>=st.top()){
                cout<<"Top = "<<mini<<endl;
            }
            else{
                cout<<"Top = "<<st.top()<<endl;
            }
        }
    }

    void getMin(){
        if(st.empty()){
            cout<<"Stack is empty!"<<endl;
        }
        else{
            cout<<"Min: "<<mini<<endl;
        }
    }
};

int main() {
   minStack std;
   std.push(12);
   std.push(15);
   std.push(10);

   std.getMin();
   std.pop();
   std.getMin();
   std.top();
   std.push(10);
   std.top();

}