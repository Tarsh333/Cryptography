using namespace std;
string railfencecipherencrypt(string s){
    int size=s.size();
    string ans;
    for(int i=0;i<size;i+=2){
        ans.push_back(s[i]);
    }
    for(int i=1;i<size;i+=2){
        ans.push_back(s[i]);
    }
    return ans;
}
string railfencecipherdecrypt(string s){
    int size=s.size();
    string ans;
    int i=0;
    int j=((size-1)/2)+1;
    for(i,j;(i<=(size/2-1))&&(j<size);i++,j++){
        ans.push_back(s[i]);
        ans.push_back(s[j]);
    }
    if((size&1))ans.push_back(s[i]);
    return ans;
}