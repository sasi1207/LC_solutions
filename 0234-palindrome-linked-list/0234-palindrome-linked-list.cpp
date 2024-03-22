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
    ListNode* reverse( ListNode* head){
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
public:
    bool isPalindrome(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head;
        while(f!=nullptr && f->next!=nullptr){
            s=s->next;
            f=f->next->next;
        }
        ListNode* rev=reverse(s);
        while(rev!=nullptr and head!=nullptr){
            cout<<head->val<<" "<<rev->val<<endl;
            if(rev->val!=head->val){
                return false;
            }
            head=head->next;
            rev=rev->next;
        }
        return true;
    }
};