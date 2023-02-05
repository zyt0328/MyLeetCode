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
    ListNode* reverse(ListNode* head) { 
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
public:
    bool isPalindrome(ListNode* head) {
        if(NULL == head){
            return false;
        }else if(NULL == head->next){
            return true;
        }

        ListNode* p1 = head;
        ListNode* p2 = head;
        while(NULL != p1 && NULL != p1->next){
            p1 = p1->next->next;
            p2 = p2->next;
        }
        if(NULL != p1){
            p2 = p2->next;
        }

        p2 = reverse(p2);
        p1 = head;

        while(p1 != NULL && p2 != NULL){
            if(p1->val != p2->val){
                return false;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;

        
    }
};
