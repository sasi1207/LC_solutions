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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        ListNode* temp2=list1;
        int i=0;
        while(temp!=nullptr or temp2!=nullptr){
            if(i<a-1){
                temp=temp->next;
            }
            if(i<b+1){
                temp2=temp2->next;
            }
            if(i>a-1 and i>b+1){
                break;
            }
            i++;
        }
        while(list2!=nullptr){
            temp->next=list2;
            list2=list2->next;
            temp=temp->next;
        }
        temp->next=temp2;
        return list1;
    }
};