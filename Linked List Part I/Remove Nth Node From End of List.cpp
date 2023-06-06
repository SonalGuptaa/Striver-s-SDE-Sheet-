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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // if(head==NULL)
        // {
        //     return NULL;
        // }
        // ListNode *first=head;
        // for(int i=0;i<n;i++)
        // {
        //     if(first==NULL)
        //     {
        //         return NULL;
        //     }
        //     first=first->next;
        // }
        // ListNode *second=head;
        // while(first!=NULL)
        // {
        //     second=second->next;
        //     first=first->next;
        // }
        // return second->data;
        int count=0;
        ListNode *temp;
        for(temp=head; temp!=NULL; temp=temp->next)
        {
            count++;
        }
        temp=head;
        if(head->next==NULL && n==1){
            return NULL;
        }
        if(count==n){
            head=head->next;
            return head;
        }
        for(int i=0;i<count-n-1;i++)
        {
        temp=temp->next;   
        }
        if(temp->next!=NULL){
             temp->next=temp->next->next;
        }

        return head;

    } 
};