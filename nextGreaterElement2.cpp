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
    vector<int> arr={1,2,3,4,5,6};
    int n= arr.size();
    vector<int> sol(n);
    stack<int> st;


    for(int i=2*n-2; i>=0; i--){
        while(!st.empty() && st.top()<=arr[i%n]){
            st.pop();
        }
        if(i<n && st.empty()){
            sol[i]=-1;
        }
        else if(i<n){
            sol[i]=st.top();
        }
        st.push(arr[i%n]);
    }

    print_v(arr);
    print_v(sol);
}

// TC= O(4n) //at max. 2n traversals and 2n element removals from the stack!
// SC= O(2n) + O(n) to store the ans.