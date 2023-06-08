#include "../template.hpp"
/*
Given the heads of two singly linked-lists headA and headB, return the node at
which the two lists intersect. If the two linked lists have no intersection at
all, return null.

For example, the following two linked lists begin to intersect at node c1:
*/
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    ListNode* pA = headA;
    ListNode* pB = headB;
    while (pA != pB) {
        pA = pA == nullptr ? headB : pA->next;
        pB = pB == nullptr ? headA : pB->next;
    }
    return pA;
}

int main() {
    ListNode* common = new ListNode(5, new ListNode(2));
    ListNode* headA = new ListNode(1, new ListNode(2, new ListNode(3, common)));

    ListNode* headB = new ListNode(1, new ListNode(3, new ListNode(4, common)));
    ListNode* result = getIntersectionNode(headA, headB);
    if (result)
        cout << result->val;
    else
        cout << "nullptr";
}

/*
Visualization of this solution:
Case 1 (Have Intersection & Same Len):

       a
A:     a1 → a2 → a3
                   ↘
                     c1 → c2 → c3 → null
                   ↗
B:     b1 → b2 → b3
       b
            a
A:     a1 → a2 → a3
                   ↘
                     c1 → c2 → c3 → null
                   ↗
B:     b1 → b2 → b3
            b
                 a
A:     a1 → a2 → a3
                   ↘
                     c1 → c2 → c3 → null
                   ↗
B:     b1 → b2 → b3
                 b
A:     a1 → a2 → a3
                   ↘ a
                     c1 → c2 → c3 → null
                   ↗ b
B:     b1 → b2 → b3
Since a == b is true, end loop while(a != b), return the intersection node a =
c1.

Case 2 (Have Intersection & Different Len):

            a
A:          a1 → a2
                   ↘
                     c1 → c2 → c3 → null
                   ↗
B:     b1 → b2 → b3
       b
                 a
A:          a1 → a2
                   ↘
                     c1 → c2 → c3 → null
                   ↗
B:     b1 → b2 → b3
            b
A:          a1 → a2
                   ↘ a
                     c1 → c2 → c3 → null
                   ↗
B:     b1 → b2 → b3
                 b
A:          a1 → a2
                   ↘      a
                     c1 → c2 → c3 → null
                   ↗ b
B:     b1 → b2 → b3
A:          a1 → a2
                   ↘           a
                     c1 → c2 → c3 → null
                   ↗      b
B:     b1 → b2 → b3
A:          a1 → a2
                   ↘                a = null, then a = b1
                     c1 → c2 → c3 → null
                   ↗           b
B:     b1 → b2 → b3
A:          a1 → a2
                   ↘
                     c1 → c2 → c3 → null
                   ↗                b = null, then b = a1
B:     b1 → b2 → b3
       a
            b
A:          a1 → a2
                   ↘
                     c1 → c2 → c3 → null
                   ↗
B:     b1 → b2 → b3
            a
                 b
A:          a1 → a2
                   ↘
                     c1 → c2 → c3 → null
                   ↗
B:     b1 → b2 → b3
                 a
A:          a1 → a2
                   ↘ b
                     c1 → c2 → c3 → null
                   ↗ a
B:     b1 → b2 → b3
Since a == b is true, end loop while(a != b), return the intersection node a =
c1.

Case 3 (Have No Intersection & Same Len):

       a
A:     a1 → a2 → a3 → null
B:     b1 → b2 → b3 → null
       b
            a
A:     a1 → a2 → a3 → null
B:     b1 → b2 → b3 → null
            b
                 a
A:     a1 → a2 → a3 → null
B:     b1 → b2 → b3 → null
                 b
                      a = null
A:     a1 → a2 → a3 → null
B:     b1 → b2 → b3 → null
                      b = null
Since a == b is true (both refer to null), end loop while(a != b), return a =
null.

Case 4 (Have No Intersection & Different Len):

       a
A:     a1 → a2 → a3 → a4 → null
B:     b1 → b2 → b3 → null
       b
            a
A:     a1 → a2 → a3 → a4 → null
B:     b1 → b2 → b3 → null
            b
                 a
A:     a1 → a2 → a3 → a4 → null
B:     b1 → b2 → b3 → null
                 b
                      a
A:     a1 → a2 → a3 → a4 → null
B:     b1 → b2 → b3 → null
                      b = null, then b = a1
       b                   a = null, then a = b1
A:     a1 → a2 → a3 → a4 → null
B:     b1 → b2 → b3 → null
            b
A:     a1 → a2 → a3 → a4 → null
B:     b1 → b2 → b3 → null
       a
                 b
A:     a1 → a2 → a3 → a4 → null
B:     b1 → b2 → b3 → null
            a
                      b
A:     a1 → a2 → a3 → a4 → null
B:     b1 → b2 → b3 → null
                 a
                           b = null
A:     a1 → a2 → a3 → a4 → null
B:     b1 → b2 → b3 → null
                      a = null
*/