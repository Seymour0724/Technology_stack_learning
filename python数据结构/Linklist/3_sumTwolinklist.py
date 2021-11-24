"""
计算两链表所代表数之和
"""

class LNode:
    def __init__(self,x):
        self.val = x
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
    def printLink(self,head):
        if head == None: return None
        res = []
        p = head
        while p != None:
            res.append(p.val)
            p = p.next
        return res

def towLLadd(head1,head2):
    if head1 == None: return head2
    if head2 == None: return head1
    cursor = LNode(0)
    res = cursor
    p1 = head1
    p2 = head2
    c = 0
    while p1!=None and p2!=None:
        tmp = p1.val+p2.val
        if c:
            res.next = LNode((tmp+c)%10)
            res = res.next
            if (tmp+c)//10 == 1: c=1
            else: c=0
        else:
            res.next = LNode(tmp%10)
            res = res.next
            if tmp//10 == 1: c=1
            else: c=0
        p1 = p1.next
        p2 = p2.next
    if p1!=None:
        res.next = LNode((p1.val+c)%10)
        res = res.next
        if (p1.val+c)//10==1: c=1
        else: c=0
        p1 = p1.next
        while p1!=None:
            res.next = LNode((p1.val+c)%10)
            res = res.next
            if (p1.val + c) // 10 == 1: c = 1
            else: c = 0
            p1 = p1.next
    if p2!=None:
        res.next = LNode((p2.val+c)%10)
        res = res.next
        if (p2.val+c)//10==1: c=1
        else: c=0
        p2 = p2.next
        while p2!=None:
            res.next = LNode((p2.val+c)%10)
            res = res.next
            if (p2.val + c) // 10 == 1: c = 1
            else: c = 0
            p2 = p2.next
    if c: res.next = LNode(c)
    return cursor.next

if __name__ == "__main__":
    # h1 = [3,4,5,6,7,9]
    # h2 = [9,8,2,6,5]
    h1 = [9,9,9,9,9,9,9,9,9,9,9,9,9]
    h2 = [9]
    ll = Linklist()
    head_h1 = ll.init_linklist(h1)
    head_h2 = ll.init_linklist(h2)
    print(ll.printLink(head_h1))
    print(ll.printLink(head_h2))
    head = towLLadd(head_h1,head_h2)
    print(ll.printLink(head))