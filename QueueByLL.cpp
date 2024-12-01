#include<iostream>
using namespace std;

class ListNode{
    public:
    int x;
    ListNode* next;

    ListNode(int y){
        x=y;
        next=nullptr;
    }

};

class queue2{

    ListNode* top;
    int size;

    public:
    

    queue2(){
        top=nullptr;
        size=0;
    }

    void printLL(ListNode* top2){
        while(top2!=nullptr){
            cout<<top2->x<<"->";
            top2=top2->next;
        }
        cout<<endl<<endl;
    }

    void push(int y){
        if(top==nullptr){
            ListNode* newLN= new ListNode(y);
            top= newLN;
            size++;
        }
        else{
            ListNode* newLN= new ListNode(y);
            newLN->next=top;
            top=newLN;
            size++;
        }

        printLL(top);
    }

    void pop(){
        ListNode* temp= top;
        if(temp==nullptr){
            cout<<"Queue is empty";
        }
        else if(temp->next==nullptr){
            top= nullptr;
            delete temp;
            size--;
        }
        else{
            while(temp->next->next!=nullptr){
                temp=temp->next;
            }

            delete temp->next;
            temp->next= nullptr;
            size--;

        }

        printLL(top);
    }

    void top2(){
        if(top==nullptr){
            cout<<"Queue is Empty!";
        }
        else{
            cout<<"Top: "<<top->x<<endl;    
        }

        printLL(top);
    }

    void size2(){
        cout<<"Size of LL: "<<size<<endl;

        printLL(top);
    }


};

int main(){
    queue2 q;
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.top2();
    q.pop();
    q.push(7);
    q.size2();
}