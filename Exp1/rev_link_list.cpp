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

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    
    while (current != nullptr) {
        ListNode* next = current->next; // Store next node
        current->next = prev;            // Reverse the link
        prev = current;                  // Move prev to current
        current = next;                  // Move to next node
    }
    
    return prev; // New head of the reversed list
}
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode* prev = nullptr;
    ListNode* current = head;
    
    while (current != nullptr) {
        ListNode* next = current->next; 
        current->next = prev;           
        prev = current;                  
        current = next;                 
    }
    
    return prev;
    }
};