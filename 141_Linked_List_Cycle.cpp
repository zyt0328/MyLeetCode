// Double pointer
// Fast pointer and Slow pointer

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p1 = head;
        ListNode *p2 = head;
        if(NULL == head){
            return false;
        }
        while(NULL != p2->next && NULL != p2->next->next){
            p1 = p1->next;
            p2 = p2->next->next;
            if (p1 == p2){
                return true;
            }
        }
        return false;
    }
};
