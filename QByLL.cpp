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

class queue{
    
    ListNode* front;
    ListNode* back;
    int size;

    public:
    queue(){
        front=nullptr;
        back= nullptr;
        size=0;
    }

    void printQ(){
        ListNode* temp= front;
        while(temp!=nullptr){
            cout<<temp->x<<"->";
            temp=temp->next;
        }
        cout<<endl<<endl;
    }

    void push(int y){
        if(size==0){
            ListNode* newLN= new ListNode(y);
            front= newLN;
            back= newLN;
            size++;
        }
        else{
            ListNode* newLN= new ListNode(y);
            back->next= newLN;
            back= newLN;
            size++;
        }

        printQ();
    }

    void pop(){
        if(size==0){
            cout<<"Queue is empty!"<<endl;
        }
        else if(front==back){
            ListNode* temp= front;
            front=nullptr;
            back= nullptr;
            delete temp;
            size--;
        }
        else{
            ListNode* temp= front;
            front= front->next;
            delete temp;
            size--;
        }
        printQ();
    }

    void frontQ(){
        if(front==nullptr){
            cout<<"Queue is empty!";
        }
        else{
            cout<<"Front element : "<< front->x<<endl;
        }
        printQ();
    }
    void backQ(){
        if(back==nullptr){
            cout<<"Queue is empty!";
        }
        else{
            cout<<"Back element : "<< back->x<<endl;
        }
        printQ();

    }

    void sizeQ(){
        cout<<"Size of Queue: "<<size<<endl;
        printQ(); 
    }
};

int main(){
    queue q;
    q.push(7);
    q.push(2);
    q.push(3);
    q.push(5);
    q.pop();
    q.frontQ();
    q.pop();
    q.pop();
    q.frontQ();




}