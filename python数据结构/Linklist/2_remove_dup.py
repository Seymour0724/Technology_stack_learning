"""
移除列表的重复项
"""

class lNode:
    def __init__(self,x):
        self.val = x
        self.next = None

class Linklist:
    def __init__(self):
        self.next = None
    def init_linklist(self,li):
        if len(li) == 0: return None
        head = lNode(li[0])
        p = head
        for i in range(1,len(li)):
            p.next = lNode(li[i])
            p = p.next
        return head
    def print_linklist(self,head):
        if head == None:
            return None
        res = []
        p = head
        while p != None:
            res.append(p.val)
            p = p.next
        return res

def remove_dup(head):
    if head == None or head.next == None:
        return head
    one_list = []
    pre = head
    post = head.next
    one_list.append(pre.val)
    # print(pre.val,post.val)
    while post != None:
        if post.val in one_list:
            pre.next = post.next
            post.next = None
            post = pre.next
            continue
        else:
            one_list.append(post.val)
            pre = pre.next
            post = post.next
        #print(one_list)
    return head


if __name__ == "__main__":
    li = [3,3,2,1,3,1,0,6,9,6,4,4,0]
    ll = Linklist()
    head = ll.init_linklist(li)
    print(ll.print_linklist(head))
    print(ll.print_linklist(remove_dup(head)))