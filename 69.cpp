//Given the head of a linked list head, in which each node contains an integer value.
//
//Between every pair of adjacent nodes, insert a new node with a value equal to the greatest common divisor of them.
//
//Return the linked list after insertion.
//
//The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.
//Input: head = [18,6,10,3]
//Output: [18,6,6,2,10,1,3]
//Explanation: The 1st diagram denotes the initial linked list and the 2nd diagram denotes the linked list after inserting the new nodes (nodes in blue are the inserted nodes).
//- We insert the greatest common divisor of 18 and 6 = 6 between the 1st and the 2nd nodes.
//- We insert the greatest common divisor of 6 and 10 = 2 between the 2nd and the 3rd nodes.
//- We insert the greatest common divisor of 10 and 3 = 1 between the 3rd and the 4th nodes.
//There are no more adjacent nodes, so we return the linked list.


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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp;
        int ch,ans;

        temp=head;
        while(temp->next!=NULL){
            if(temp->val<(temp->next)->val){
                ch=temp->val;
            }
            else{
                ch=(temp->next)->val;
            }

            ans=1;
            for(int i=2;i<=ch;i++)
            {
                if((temp->val)%i==0 && ((temp->next)->val)%i==0)
                {
                    ans=i;
                }
            }

            temp->next=new ListNode(ans,temp->next);
            temp=(temp->next)->next;
        }
        return head;
    }
};