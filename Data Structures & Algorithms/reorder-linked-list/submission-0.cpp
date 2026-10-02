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
    ListNode* reverseLL(ListNode* head){
        ListNode* prev, *curr, *next;
        prev=NULL;
        curr=head;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        return prev;
    }

    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast!=NULL && fast->next!=NULL ){
            slow=slow->next; fast=fast->next->next;
        }

        ListNode* head1, *temp1, *head2, *temp2;
        head1=head;
        head2=slow->next;
        slow->next=NULL;
        head2=reverseLL(head2);

        while(head2!=NULL){
            temp1=head1->next;
            temp2=head2->next;
            head1->next=head2;
            head2->next=temp1;
            head1=temp1;
            head2=temp2;
        }

    }
};
