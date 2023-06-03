class ListNode:
    def __init__(self,val=0,next=None):
        self.val = val
        self.next = next
def merge(list1: ListNode,list2: ListNode) -> ListNode:
    result = dummy = ListNode()
    if list1 is None:
        return list2
    if list2 is None:
        return list1
    while list1 and list2:
        if list1.val <= list2.val:
            result.next = list1
            result = result.next

            list1 = list1.next
        else:
            result.next = list2
            result = result.next
            list2 = list2.next
        if list1 or list2:
            result.next = list1 if list1 else list2
    return dummy.next
list1 = ListNode()
list2 = None
temp = merge(list1,list2)
while temp:
    print(temp.val)
    temp = temp.next