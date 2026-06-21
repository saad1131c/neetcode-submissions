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
        stack<ListNode*> st;
        ListNode* p = head;
        if (p == NULL) return NULL;
        while(p != NULL){
            st.push(p);
            p = p->next;
        }
        ListNode* n = p = st.top();
        st.pop();
        while(!st.empty()){
            n->next = st.top();
            st.pop();
            n = n->next;
        }
        n->next = NULL;
        return p;
    }
};
