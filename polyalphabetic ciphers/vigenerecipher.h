using namespace std;
string vigenerecipherencrypt(string s){
    string secret="pascal";
    int secretsize=secret.size();
    for(int i=0,j=0;j<s.size();j++,i=(i+1)%secretsize){
        s[j]=(s[j]-'a');
        s[j]+=(secret[i]-'a');
        s[j]%=26;
        // cout<<s[j]<<" "<<secret[i]-'a'<<endl;
        s[j]+='a';
    }
    return s;
}
string vigenerecipherdecrypt(string s){
    string secret="pascal";
    int secretsize=secret.size();
    for(int i=0,j=0;j<s.size();j++,i=(i+1)%secretsize){
        s[j]=(s[j]-'a');
        s[j]-=(secret[i]-'a');
        s[j]=(s[j]+26)%26;
        s[j]+='a';
    }
    return s;
}