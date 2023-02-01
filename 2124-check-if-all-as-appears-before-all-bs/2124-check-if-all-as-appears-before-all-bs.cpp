class Solution {
public:
    bool checkString(string s) {
        string temp="";
        int c1=0,c2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                c1++;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                temp.push_back(s[i]);
                c2++;
            }
            else
                break;
        }
        if(c1==c2)
            return 1;
        else 
            return 0;
    }
};