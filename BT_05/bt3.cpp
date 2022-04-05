#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m,p,pi1,pi2;
    cin>>n;
    vector<int> v;
    while(n){
        cin>>p;
        v.push_back(p);
        n--;
    }
    cin>>m>>pi1>>pi2;
    v.erase(v.begin()+m-1);
    v.erase(v.begin()+pi1-1,v.begin()+pi2-1);
    int size=v.size();
    cout<<size<<endl;
    for(int j=0;j<size;j++){
        cout<<v[j]<<" ";
    }
    return 0;
}

