class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        deque<char> d;
        int ans = 0, n;
        
        for (auto c:s){
            auto it = find(d.begin(), d.end(), c);
            if (it != d.end()){
                while(d.front() != c){
                    d.pop_front();
                }
                d.pop_front();
                d.push_back(c);
            }else{
                d.push_back(c);
                n = d.size();
                ans = max(ans,n);
            }
        }
        n = d.size();
        ans = max(ans,n);
        return ans;
	
    }
};