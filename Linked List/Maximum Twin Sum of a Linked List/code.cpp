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
    ListNode* reverse(ListNode* head){
        if(head == NULL)
            return head;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(curr != NULL){
            ListNode* forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
    
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    int pairSum(ListNode* head) {
        if(head->next->next == NULL)
            return head->val + head->next->val;
        
        ListNode* mid = findMid(head);
        ListNode* L1 = head;
        ListNode* L2 = reverse(mid);
        
        int ans = 0;
        while(L2){                                  
            ans = max(ans, L1->val + L2->val);
            L1 = L1->next;
            L2 = L2->next;
        }
        return ans;
    }
};
