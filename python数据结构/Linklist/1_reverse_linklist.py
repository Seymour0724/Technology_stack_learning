"""
实现链表逆序
"""

class LNode:
    def __init__(self,x):
        self.data = x
        self.next = None

class Linklist:
    def __init__(self):
        self.next = None
    def init_linklist(self,li):
        if len(li) == 0: return None
        head = LNode(li[0])
        p = head
        for i in range(1,len(li)):
            p.next = LNode(li[i])
            p = p.next
        return head
    def print_ll(self,head):
        if head == None: return None
        result = []
        p = head
        while p != None:
            result.append(p.data)
            p = p.next
        return result

#链表原地修改
def reverse1(head):
    pre = None
    cur = head_li
    nxt = cur.next
    while cur.next != None:
        cur.next = pre
        pre = cur
        cur = nxt
        nxt = nxt.next
    cur.next = pre
    return cur

#采用递归的方式  递归：
def reverse2(head):
    if head is None or head.next is None:
        return head
    else:
        newhead = reverse2(head.next)
        head.next.next = head
        head.next = None
    return newhead


if __name__ == "__main__":
    li = [1,2,3,4,5]
    l = Linklist()
    head_li = l.init_linklist(li)
    head = reverse1(head_li)
    print(l.print_ll(head))
    newhead = reverse2(head)
    print(l.print_ll(newhead))
