class Solution {
public:
    vector<int> relativeSortArray(vector<int>& A1, vector<int>& A2) {
        map<int,int>ans;
        int N=A1.size();
        int M=A2.size();
        vector<int> temp;
        for(int i=0;i<N;i++){
            ans[A1[i]]++;
        }
        for(int i=0;i<M;i++){
            int freq=ans[A2[i]];
            while(freq){
                temp.push_back(A2[i]);
                freq--;
            }
            ans[A2[i]]=0;
        }
        for(auto i=ans.begin();i!=ans.end();i++){
            int p= i->first, freq=i->second;
            while(freq){
                temp.push_back(p);
                freq--;
            }
            i->second=0;
        } return temp;
        
    }
};