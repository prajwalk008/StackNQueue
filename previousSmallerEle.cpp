#include <bits/stdc++.h>
using namespace std;

//dt
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

//v-print
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; cout<<endl;}

int main() {
    vi arr={4, 5, 2, 10, 8, 3, 7, 6};
    int n=arr.size();
    stack<int> st;
    vi sol(n);

    for(int i=0; i<n; ++i){
        while(!st.empty() && st.top()>=arr[i]){
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