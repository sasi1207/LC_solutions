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
    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr!=nullptr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head;
        while(f!=nullptr && f->next!=nullptr){
            s=s->next;
            f=f->next->next;
        }
        ListNode* rev=reverse(s);
        while(rev->next!=nullptr and head!=nullptr){
            ListNode* insert=new ListNode();
            insert->val=rev->val;
            insert->next=head->next;
            head->next=insert;
            rev=rev->next;
            head=head->next->next;
        }
    }
};