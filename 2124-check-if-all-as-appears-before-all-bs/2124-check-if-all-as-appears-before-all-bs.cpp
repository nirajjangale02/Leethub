class Solution {
public:
    bool checkString(string s) {
        // int count=0;
        // int temp=0;
        // if(count==0){
        //     return 1;
        // }
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='a' ){
        //         count++;
        //     }
        // }
        // for(int i=0;i<count;i++){
        //     if(s[i]=='a'){
        //         temp++;
        //     }
        // }
        // if(temp!=count){
        //     return 0;
        // }
        // return 1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]>s[i+1]){
                return 0;
            }
        } return 1;
    }
};