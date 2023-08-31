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
    ListNode* rotateRight(ListNode* &head, int k) {
        if(head==NULL || head->next==NULL ){
            return head;
        }
        int length=0;
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast!=NULL){  
            fast=fast->next;
            length++;
        }
        
        k=k%length;
        
        if(k==0){
            return head;}
        
        ListNode *temp=NULL;
        fast=head;
        
        while(--k){
            fast=fast->next;
        }
		
        while(fast->next!=NULL){
            temp=slow;
            slow=slow->next;
            fast=fast->next;
        }
        
        fast->next=head;
        temp->next=NULL;
        head=slow;
        return head;
    }
};
