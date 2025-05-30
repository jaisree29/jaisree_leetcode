class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        string res="";
        while(n>0)
        {
            res=char('0'+(n%2))+res;
            if(n%2==1)
            {
                count++;
            }
            n=n/2;
        }
        return count;
    }
};