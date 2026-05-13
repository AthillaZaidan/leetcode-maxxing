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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> x;
        ListNode* curr = head;
        while(curr != nullptr){
            x.push_back(curr);
            curr = curr->next;
        }

        ListNode dummy(0);
        ListNode* newList = &dummy;

        for (int i = 0; i < x.size(); i++){
            if (i == (x.size() - n)){
                continue;
            }
            newList->next = x[i];
            newList = newList->next;
        }
        newList->next = nullptr;
        return dummy.next;
    }
};
