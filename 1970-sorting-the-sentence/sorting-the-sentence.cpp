class Solution {
public:
    string sortSentence(string s) {
        string temp;
        vector<string> v(10);  
        
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                v[s[i] - '0'] = temp + " ";
                temp = "";
                i++;  
            } else {
                temp += s[i];
            }
        }

        string res;
        for (string str : v) {
            res += str;
        }

        if (!res.empty()) 
        res.pop_back(); 
        return res;
    }
};
