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



//Single pointer
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p1 = head;
        if(NULL == head ){
            return head;
        }
        while(NULL != p1->next){
            if(p1->val == p1->next->val){
                p1->next = p1->next->next;
            }else{
                p1 = p1->next;
            }
        }
        return head;
        
    }
};



//Double pointer
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p1 = head;
        if(NULL == head ){
            return head;
        }
        ListNode *p2 = head->next;
        while(NULL != p2){
            if(p1->val == p2->val){
                p1->next = p2->next;
                p2 = p1->next;
            }else{
                p1 = p1->next;
                p2 = p2->next;
            }
        }
        return head;
        
    }
};


//Recurrsion
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(NULL == head || NULL == head->next){
            return head;
        }
        head->next = deleteDuplicates(head->next);
        if (head->next->val == head->val){
            return head->next;
        }else{
            return head;
        }
    }
        
};
