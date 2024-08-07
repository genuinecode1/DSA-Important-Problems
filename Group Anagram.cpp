/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int> mp;
        vector<string> v;
        for(auto i:strs){
        sort(i.begin(),i.end());
        v.push_back(i);
        mp[i]++;
        }
        vector<vector<string>> ans;
        for(auto i:mp){
            vector<string> temp;
            int count=0;
            for(int j=0;j<strs.size();j++){
                if(count==i.second)
                break;
                if(i.first==v[j]){
                 temp.push_back(strs[j]);
                 count++;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
