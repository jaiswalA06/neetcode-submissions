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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int i=1;
        ListNode* curr=head, *prev=NULL, *next;

        if(head==NULL || left==right){
            return head;
        }

        while(i<left){
            prev=curr;
            curr=curr->next;
            i++;
        }
        ListNode* first= prev, *revStart=curr;
        for(int i=left; i<=right;i++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        revStart->next=curr;

        if(first!=NULL){
            first->next=prev;
        }

        else{
            head=prev;
        }

        return head;
    }
};