/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-


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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
        return NULL;
        if(head->next==NULL)
        return NULL;
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        count=(count/2);
        temp=head;
        temp=temp->next;
        ListNode* curr=head;
        while(count>1){
            cout<<curr->val;
            cout<<temp->val;
            count--;
            if(temp->next!=NULL){
            curr=curr->next;
            temp=temp->next;
            }

            cout<<endl;
            
        }
        curr->next=temp->next;
        

        
        return head;
    }
};
