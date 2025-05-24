class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
        sort(c.begin(),c.end(),greater<int>());
        int sum=0;
        for(int i=0;i<a.size();i++)
        sum=sum+a[i];
        for(int i=0;i<c.size();i++){
            sum=sum-c[i];
            if(sum<=0)
            return i+1;
        }
        return c.size();
    }
};