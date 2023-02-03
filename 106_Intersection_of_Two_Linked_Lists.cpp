class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(NULL == headA || NULL == headB){
            return NULL;
        }
        ListNode* p1 = headA;
        ListNode* p2 = headB;

        int count1 = 0;
        int count2 = 0;
        while(NULL != p1 || NULL != p2){
            if(NULL != p1 ){
                p1 = p1->next;
                count1++;
            }
            if(NULL != p2){
                p2 = p2->next;
                count2++;
            }
        }
        int difference = count1 - count2;

        p1 = headA;
        p2 = headB;
        if (difference < 0){
            for (int i = 0; i > difference; i--){
                p2 = p2->next;
            }
        }else{
            for (int i = 0; i < difference; i++ ){
                p1 = p1->next;
            }

        }

        while(p1 != NULL){
            if (p1 == p2){
                return p1;
            }
            p1 = p1->next;
            p2 = p2->next;
        }

        return p1;

            
        return p1;
    }
};
