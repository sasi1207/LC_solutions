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
        ListNode* prev=NULL;
        ListNode* temp=head;
        int c=1;
        while(temp->next!=NULL){
            temp=temp->next;
            c++;
        }
        cout<<c-n+1<<endl;
        temp=head;
        for(int i=1;i<(c-n+1);i++){
            prev=temp;
            temp=temp->next;
        }
        if(prev==NULL){
            head=head->next;
            return head;
        }
        else{
            prev->next=prev->next->next;
        }
        return head;
    }
};