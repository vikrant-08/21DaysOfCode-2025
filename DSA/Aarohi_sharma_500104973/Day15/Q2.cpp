#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end(), [](const string& a, const string& b) {
        return a.length() < b.length(); 
    });
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
