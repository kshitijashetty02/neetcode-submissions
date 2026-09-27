class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Base cases: if one list runs out, return the other
        if (!list1) return list2;
        if (!list2) return list1;
        
        // If list1 is smaller, advance list1
        if (list1->val <= list2->val) {        
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        // If list2 is smaller, advance list2
        else {        
            list2->next = mergeTwoLists(list1, list2->next); // Fixed!
            return list2;
        }
    }
};
