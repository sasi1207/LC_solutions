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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*> rtn;
        ListNode* front=new ListNode(0,head);
        ListNode* curr=front;
        int prs=0;
        while(curr!=nullptr){
            prs+=curr->val;
            rtn[prs]=curr;
            curr=curr->next;
        }
        unordered_map<int,ListNode*>:: iterator it;
        it=rtn.begin();
        while(it!=rtn.end()){
            cout<<it->first<<" "<<it->second->val<<endl;
            ++it;
        }
        prs=0;
        curr=front;
        while(curr!=nullptr){
            prs+=curr->val;
            curr->next=rtn[prs]->next;
            curr=curr->next;
        }
        return front->next;
    }
};