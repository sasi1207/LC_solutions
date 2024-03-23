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
        ListNode* s=head;
        ListNode* f=head;
        ListNode* prev=head;
        if(f->next==nullptr){
            head=nullptr;
            return head;
        }
        while(f!=nullptr && f->next!=nullptr){
            if(prev!=s){
                prev=prev->next;
            }
            s=s->next;
            f=f->next->next;
        }
        prev->next=s->next;
        s->next=nullptr;
        return head;
    }
};