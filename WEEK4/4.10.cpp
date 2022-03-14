string toLower (string s){
    int n=s.size();
    int k;
    for(int i=0;i<n;i++){
        if((s[i]>='A')&&(s[i]<='Z')){
            k=int(s[i])+32;
            s[i]=char(k);
        }
    }
    return s;
}
