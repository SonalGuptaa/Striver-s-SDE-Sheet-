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
        // METHOD1
        vector<int> temp;
        for(ListNode *curr=head ;curr!=NULL; curr=curr->next)
        {
            temp.push_back(curr->val);
        }
        for(ListNode *curr=head;curr!=NULL;curr=curr->next)
        {
            curr->val=temp.back();
            temp.pop_back();
        }
        return head;
    
    // Method2
    ListNode *curr=head;
    ListNode *prev=NULL;
    while(curr!=NULL)
    {
        ListNode *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

    }
};