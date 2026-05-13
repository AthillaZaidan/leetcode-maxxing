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
    void reorderList(ListNode* head) {
        if (!head){
            return;
        }   

        vector<ListNode*> x;
        ListNode* temp = head;
        while (temp != nullptr){
            x.push_back(temp);
            temp = temp->next;
        }

        int i = 0, j = x.size() - 1;
        while (i < j){
            x[i]->next = x[j];
            i++;
            if (i >= j){ break; }
            x[j]->next = x[i];
            j--;
        }
        x[i]->next = nullptr;
    }
};
