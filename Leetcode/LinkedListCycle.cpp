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
    bool hasCycle(ListNode *head) {
        if (head == NULL) return false;
        ListNode *slow= head, *fast = head->next;
        while (fast && fast != slow) {
            if (fast->next) {
                slow = slow->next;
                fast = fast->next->next;
            } else break;
        }
        return slow == fast;
    }
};