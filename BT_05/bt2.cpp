#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v; 
    int n,m; 
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }

    sort(v.begin(),v.end());
    for(int j=0;j<n;j++){
        cout<<v[j]<<" ";
    }
    return 0;
}

