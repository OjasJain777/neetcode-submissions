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
    bool hasCycle(ListNode* head) {
        ListNode *a = head;
        ListNode *b= head;
        int i = 0;
        int c =0;
        while(a!=0){
            if(a->val == b->val){
                if(c==1){
                    return 1;
                }
                c++;
            }
            if(i==0){
                a=a->next;
                i=1;
            }
            else{
                a=a->next;
                i=0;
                b=b->next;
            }
        }
        return 0;
    }
};
