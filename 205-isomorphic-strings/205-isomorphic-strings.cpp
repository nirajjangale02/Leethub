class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        int m=t.length();
        int s1[256]={0};
        int s2[256]={0};
        for(int i=0;i<n;i++){
            if(!s1[s[i]] && !s2[t[i]]){
                s1[s[i]]=t[i];
                s2[t[i]]=s[i];
            }
            else if(s1[s[i]]!=t[i]){
                return 0;
            }
        } return 1;
    }
};