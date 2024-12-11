





// Monotonic stack used to implement next greater element vector

#include <bits/stdc++.h>
using namespace std;

template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; cout<<endl;}


int main() {
    vector<int> arr={4, 5, 2, 10, 8};
    int n= arr.size();
    stack<int> st;
    vector<int> sol(n);

    for(int i=n-1; i>=0; i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            sol[i]=-1;
            st.push(arr[i]);
        }
        else{
            sol[i]=st.top();
            st.push(arr[i]);
        }
    }
    print_v(arr);
    print_v(sol);
}