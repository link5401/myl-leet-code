"""
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
Input: head = [1,1,2]
Output: [1,2]
"""
class ListNode:
    def __init__(self, val=0,next=None):
        self.val = val
        self.next = next 

def solutions(head: ListNode):
    temp = head
    while temp:
        if temp.next and temp.next.val == temp.val:
            temp.next = temp.next.next 

        else:
            temp = temp.next
    return head


input = ListNode(1,ListNode(1,ListNode(2,None)))
sol = solutions(input)
while sol:
    print(sol.val)
    sol = sol.next