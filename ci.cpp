#include<iostream>
using namespace std;

int main(){
    int x= 200000;
    long princ=200000;

    int intr= 1.5;

    int years= 20;
    int months= years*12;

    for(int i=1; i<=months; ++i){
        princ=x+princ+(princ*intr)/100;
        x+=2000;

    }

    cout<<princ<<endl;
}