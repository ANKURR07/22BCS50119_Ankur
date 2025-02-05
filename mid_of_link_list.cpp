/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* middleNode(ListNode* head) {
    ListNode *slow = head;
    ListNode *fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;      // Move slow pointer by one
        fast = fast->next->next; // Move fast pointer by two
    }
    
    return slow; // Slow pointer is now at the middle node
}

 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
    ListNode *fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;     
        fast = fast->next->next; 
    }
    
    return slow; 
    }
};