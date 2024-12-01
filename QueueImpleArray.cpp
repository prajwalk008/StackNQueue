#include<iostream>
using namespace std;

class queueT{
    int start=-1,end=-1;
    int arr[10];
    int presentEle=0;

    public:
    void push(int x){
        if(end==-1 && start==-1){
            end=0;
            arr[end]=x;
            presentEle++;
            start=end;
            return;
        }
        else if(presentEle<10){
            end= (end+1)%10;
            arr[end]=x;
            presentEle++;
            return;
        }
        else if(presentEle>=10){
            cout<<"Queue is full"<<endl;
            return;
        }
    }
    void pop(){
        if(start==-1){
            cout<<"Queue is empty!"<<endl;
        }
        else if(presentEle<=0){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            cout<<arr[start]<<" removed"<<endl;
            start=(start+1)%10;
            presentEle--;
            if(presentEle==0){
                start=-1;
                end=-1;
            }
        }
        return;
    }

    void front(){
        if(start==-1){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            cout<<"Front element= "<<arr[start]<<endl;
        }
        return;
    }
    void size(){
        cout<<"Size= "<<presentEle<<endl;
    }

};

int main(){
    queueT q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.front();
    q.size();
    q.pop();
    q.push(8);
    q.push(9);
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.size();
    q.front();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.front();
    


}