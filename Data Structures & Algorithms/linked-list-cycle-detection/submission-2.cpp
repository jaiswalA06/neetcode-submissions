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

// HASHING
class Solution {
public:
    bool hasCycle(ListNode* head) {
        map<ListNode*,int> mcycle;

        ListNode* temp=head;
        while(temp!=NULL){
            if(mcycle.find(temp)!=mcycle.end()){
                return true;
            }

            mcycle[temp]=1;
            temp=temp->next;
        }

        return false;
    }
};
