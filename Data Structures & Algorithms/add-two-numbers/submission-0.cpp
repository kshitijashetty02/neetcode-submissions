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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry) {
       if(!l1 && !l2 && carry == 0)
       return nullptr;
       int v1=0,v2=0;
       if(l1)
       {
        v1=l1->val;
       }
       else
       v1=0;
       if(l2)
       {
        v2=l2->val;
       }
       else
       v2=0;
       int sum=v2+v1+carry;
       int newcarry=sum/10;
       int value=sum%10;
       ListNode* nextNode=addTwoNumbers((l1?l1->next:nullptr),(l2?l2->next:nullptr),newcarry);
       return new ListNode(value,nextNode);
       }
       ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){return addTwoNumbers(l1, l2, 0);}
           
};
