class Solution {
public:
    bool checkString(string s) {
        int count=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' ){
                count++;
            }
        }
        if(count==0){
            return 1;
        }
        for(int i=0;i<count;i++){
            if(s[i]=='b'){
                return 0;
            }
        }
        return 1;
       
    }
};