/*  
*给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。  
*示例 1：  
*输入：nums = [1,2,3,1]  
**输出：true  
**示例 2：  
**  
*输入：nums = [1,2,3,4]  
*输出：false  
*示例 3：  
*  
*输入：nums = [1,1,1,3,3,4,3,2,4,2]  
*输出：true  
*  
/   
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
