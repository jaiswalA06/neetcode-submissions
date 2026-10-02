/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp1=head;
        Node* temp2, *head2;
        map <Node*, Node*> mnode;
        while(temp1!=NULL){
            mnode.insert({temp1, new Node(temp1->val)});
            temp1=temp1->next;
        }
        mnode.insert({NULL,NULL});

        temp1=head;
        while(temp1!=NULL){
            temp2= mnode[temp1];
            temp2->next=mnode[temp1->next];
            temp2->random=mnode[temp1->random];
            temp1=temp1->next;
        }

        head2=mnode[head];
        return head2;        
    }
};
