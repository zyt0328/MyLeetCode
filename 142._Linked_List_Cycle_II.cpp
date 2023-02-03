/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(NULL == head){
            return head;
        }
        ListNode *p1 = head;
        ListNode *p2 = head;
        
        bool cycExist = false;
        while(NULL != p2->next && NULL != p2->next->next){
            p1 = p1->next;
            p2 = p2->next->next;
            if (p1 == p2){
                cycExist = true;
                break;
            }
        }
        if(cycExist){
            p1 = head;
            while(p1 != p2){
                p1 = p1->next;
                p2 = p2->next;
            }
            return p1;
        }
        return NULL;
    }
};
