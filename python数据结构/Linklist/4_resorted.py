"""
对链表进行重新排序
"""

class LNode:
    def __init__(self,data):
        self.val = data
        self.next = None

class Linklist:
    def __init__(self):
        self.next = None
    def initLinklist(self,li):
        if len(li) == 0: return None
        head = LNode(li[0])
        p = head
        for i in range(1,len(li)):
            p.next = LNode(li[i])
            p = p.next
        return head
    def printLinklist(self,head):
        if head == None: return None
        res = []
        p = head
        while p != None:
            res.append(p.val)
            p = p.next
        return res

def reSorted(head):
    #先找链表中间点
    p1 = head
    p2 = head
    pre_p1 = head
    pre_p2 = head.next
    while p2.next != None:
        p1 = p1.next
        p2 = p2.next.next
    while pre_p2 != p1:
        post_p1 = p1
        post_p2 = p1.next
        while post_p2.next != None:
            post_p1 = post_p1.next
            post_p2 = post_p2.next
        #这一部分是将后区尾节点插入进来
        post_p1.next = None
        pre_p1.next = post_p2
        post_p2.next = pre_p2
        pre_p1 = pre_p2
        pre_p2 = pre_p2.next
    return head

if __name__ == "__main__":
    l = [1,2,3,4,5,6,7]
    ll = Linklist()
    head = ll.initLinklist(l)
    print(ll.printLinklist(head))
    #print(reSorted(head))
    new_head = reSorted(head)
    print(ll.printLinklist(new_head))
