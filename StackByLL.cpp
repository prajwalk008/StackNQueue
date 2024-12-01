#include<iostream>
using namespace std;

class ListNode{
    public:
    int x;
    ListNode* next;

    ListNode(int y){
        x=y;
        next= nullptr;
    }
};

class stack{
    ListNode* top;
    int size;

    public:
    stack(){
        top= nullptr;
        size=0;
    }

    void printSt(){
        ListNode* temp= top;
        while(temp!=nullptr){
            cout<<temp->x<<"->";
            temp=temp->next;
        }
        cout<<endl;
        cout<<endl;
    }

    void push(int y){
        if(top==nullptr){
            ListNode* newLN= new ListNode(y);
            top= newLN;
        }
        else{
            ListNode* newLN= new ListNode(y);
            newLN->next= top;
            top= newLN;
        }
        size++;

        printSt();

    }

    void pop(){
        if(top==nullptr || size==0){
            cout<<"Stack is empty!";
        }

        else{
            ListNode* temp= top;
            top= top->next;
            delete temp;
            size--;
        }

        printSt();

    }

    void topEle(){
        if(top==nullptr){
            cout<<"Stack is empty!";
        }
        else{
            cout<<"Top = "<<top->x<<endl;
        }
        printSt();
    }

    void sizeSt(){
        cout<<"Size = "<<size<<endl;
        printSt();
    }



};

int main(){
    stack st;
    st.push(4);
    st.push(2);
    st.push(3);
    st.push(1);
    st.topEle();
    st.pop();
    st.push(7);
    st.sizeSt();




}
