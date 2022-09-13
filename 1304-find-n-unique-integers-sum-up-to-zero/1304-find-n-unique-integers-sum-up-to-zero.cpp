class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> v1;
        if(n%2==0)     // if n is even then vector will contain { -n/2,..... ,-3,-2,-1,1,2,3,4, .....,n/2} except 0 
        {
            for(int i=-n/2 ; i<=n/2 ; i++)
            {
                    if(i==0)  continue;
                    else    v1.push_back(i); 
            }
        }
        else     // if n is odd then vector will contain { -n/2,..... ,-3,-2,-1,0,1,2,3,4, .....,n/2}
        {
            for(int i=-n/2 ; i<=n/2 ; i++)
            {
                    v1.push_back(i); 
            }
        }
        return v1;
    }
};