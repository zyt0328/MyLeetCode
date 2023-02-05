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
    ListNode* reverseList(ListNode* head) { 
        if (NULL == head || NULL == head->next){
            return head;
        }
        
        ListNode* curr = head;
        ListNode* p1 = head->next;
        ListNode* p2 = NULL;
        while(NULL != p1){
            curr->next = p2;
            p2 = curr;
            curr = p1;
            p1 = p1->next;
        }
        curr->next = p2;
        p2 = curr;
        return p2;


        
    }
};


//Better solution less space use
class Solution {
public:
    ListNode* reverseList(ListNode* head) { 
        if (NULL == head || NULL == head->next){
            return head;
        }
        
        ListNode* curr = head;
        ListNode* p2 = NULL;
        while(NULL != curr){
            ListNode* p1 = curr->next;
            curr->next = p2;
            p2 = curr;
            curr = p1;
        }
        
        return p2;


        
    }
};
