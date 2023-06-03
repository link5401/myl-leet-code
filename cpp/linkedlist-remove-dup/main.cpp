#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    if (head == nullptr) return nullptr;
    ListNode* temp = head;
    while (temp != nullptr) {
        if (temp->next != nullptr && (temp->val == temp->next->val)) {
            ListNode* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        } else
            temp = temp->next;
    }
    return head;

}
int main() {
    ListNode* input =
        new ListNode(1, new ListNode(1, new ListNode(2, nullptr)));

    ListNode* p = deleteDuplicates(input);
    while (p != nullptr) {
        cout << p->val;
        p = p->next;
    }
}