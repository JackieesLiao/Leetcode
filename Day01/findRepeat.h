class Solution {  
public:
    bool containsDuplicate(vector<int>& nums) {  
        unordered_set<int> s1;  
        for(auto x:nums)  
        {  
            if(s1.find(x)!=s1.end())  
            {  
                return true;//找到了  
            }  
            s1.insert(x);//哈希表中没查到x则加入  
        }  
        return false;  
    }  
};   
