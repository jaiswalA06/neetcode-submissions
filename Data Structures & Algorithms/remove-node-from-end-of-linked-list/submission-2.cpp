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
        ListNode* temp=head, *delnode;
        int length=0;
        while(temp!=NULL){
                length++;
                temp=temp->next;
        }

        if(n==length){
            delnode=head;
            head=head->next;
            delete delnode;
            return head;
        }

        else{
            int index= length-n+1;
            temp=head;
            for(int i=1;i<index-1;i++){
                temp=temp->next;
            }

            delnode=temp->next;
            temp->next=delnode->next;
            delete delnode;

            return head;
        }
    }
};
