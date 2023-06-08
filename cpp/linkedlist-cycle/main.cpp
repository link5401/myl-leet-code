#include "../template.hpp"
/*
Given head, the head of a linked list, determine if the linked list has a cycle
in it.

There is a cycle in a linked list if there is some node in the list that can be
reached again by continuously following the next pointer. Internally, pos is
used to denote the index of the node that tail's next pointer is connected to.
Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.
*/
bool hasCycle(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return false;
    ListNode* slow = head;
    ListNode* fast = head->next;
    while (head != nullptr && head->next != nullptr) {
        if (fast == slow) return true;

        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}

int main() {
    ListNode* p = new ListNode(5);
    ListNode* p1 = new ListNode(2);
    p->next = p1;

    p1->next = p;
    cout << hasCycle(p);
}