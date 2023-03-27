/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //双指针：反转链表
        ListNode*cur=NULL,*pre=head;
        while(pre!=NULL)
        {
            //储存pre的下一个位置
            ListNode*temp=pre->next;
            //局部反转
            pre->next=cur;
            //cur、pre都向前移动
            cur=pre;
            pre=temp;
        }
        return cur;//返回链表头
    }
};
