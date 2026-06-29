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
        int s = 0;
        ListNode *a = head;
        while(a!=0){
            s++;
            a=a->next;
        }
        n = s-n;
        a = head;
        if(n==0){
            head = head ->next;
        }
        else{
            ListNode *b = head;
            for(int i = 0; i<n;i++){
                b=a;
                a=a->next;
            }
            b->next = a->next;
        }
        return head;
    }
};
